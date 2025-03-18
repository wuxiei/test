import requests
import os
import arrow
from datetime import datetime
# from dotenv import load_dotenv
import tkinter as tk
from tkinter import messagebox

# 获取城市的地理坐标
def get_coordinates(city, api_key):
    try:
        url = f"https://api.openweathermap.org/geo/1.0/direct?q={city}&limit=1&appid={api_key}"
        response = requests.get(url, timeout=10)
        response.raise_for_status()
        data = response.json()

        if data:
            lat = data[0]["lat"]
            lon = data[0]["lon"]
            return lat, lon
        else:
            messagebox.showerror("错误", "未找到该城市，请检查名称是否正确。")
            return None, None
    except requests.exceptions.RequestException as e:
        messagebox.showerror("错误", f"请求发生错误：{e}")
        return None, None

# 获取天气数据
def get_weather(lat, lon, api_key):
    weather_url = "https://api.openweathermap.org/data/2.5/weather"
    params = {
        "lat": lat,
        "lon": lon,
        "appid": api_key,
        "units": "metric",  # 摄氏温度
        "lang": "zh_cn"     # 中文描述
    }

    try:
        response = requests.get(weather_url, params=params, timeout=10)
        response.raise_for_status()
        return response.json()
    except requests.exceptions.RequestException as e:
        messagebox.showerror("错误", f"获取天气失败：{e}")
        return None

# 主程序逻辑
def on_get_weather():
    city = entry_city.get().strip()  # 获取用户输入的城市名
    """entry_city 是一个 Tkinter 的 Entry 控件实例（即用户输入文本框） / 调用 Entry 控件的 .get() 方法，获取输入框中的当前文本内容。 
      / Python 字符串的内置方法，移除字符串首尾的空白字符（包括空格、换行符 \n、制表符 \t 等）。 """
    if not city:
        messagebox.showwarning("输入错误", "城市名不能为空！")
        return

    # 获取 API 密钥
    api_key = os.getenv('OPENWEATHER_API_KEY')
    if not api_key:
        messagebox.showerror("错误", "未找到 API Key，请检查环境变量设置。")
        return

    # 获取城市坐标
    lat, lon = get_coordinates(city, api_key)
    
    if lat is not None and lon is not None:
        # 获取天气数据
        weather_data = get_weather(lat, lon, api_key)
        
        if weather_data:
            # 显示结果
            label_result.config(text=f"城市：{city}\n"
                                    f"天气：{weather_data['weather'][0]['description']}\n"
                                    f"温度：{weather_data['main']['temp']}°C\n"
                                    f"湿度：{weather_data['main']['humidity']}%\n"
                                    f"风速：{weather_data['wind']['speed']} m/s\n"
                                    f"气压：{weather_data['main']['pressure']} hPa\n"
                                    f"能见度：{weather_data['visibility']} 米\n"
                                    f"日出时间：{arrow.get(weather_data['sys']['sunrise']).to('Asia/Shanghai').format('HH:mm:ss')}\n"  # 转换为本地时间
                                    f"日落时间：{arrow.get(weather_data['sys']['sunset']).to('Asia/Shanghai').format('HH:mm:ss')}\n"  # 转换为本地时间
                                    f"数据更新时间：{arrow.get(weather_data['dt']).to('Asia/Shanghai').format('YYYY-MM-DD HH:mm:ss')}")
           
            # 正确写法（假设 weather_data['dt'] 是 Unix 时间戳）                           
        else:
            label_result.config(text="无法获取该城市的天气信息。")
    else:
        label_result.config(text="未能获取城市坐标，请检查网络连接或 API 设置。")

# 创建主窗口
root = tk.Tk()
root.title("天气查询程序")

# 创建界面元素
label_instruction = tk.Label(root, text="请输入城市名：")
label_instruction.pack(pady=5)

entry_city = tk.Entry(root, width=60)
entry_city.pack(pady=5)

button_get_weather = tk.Button(root, text="获取天气", command=on_get_weather)
button_get_weather.pack(pady=10)

label_result = tk.Label(root, text="", justify="center")
label_result.pack(pady=10)

# 运行 Tkinter 主循环
root.mainloop()