import requests
import os
#from dotenv import load_dotenv
from datetime import datetime
import arrow

# 加载 .env 文件
#load_dotenv()

def get_coordinates(city, api_key):
    try:
        url = f"https://api.openweathermap.org/geo/1.0/direct?q={city}&limit=1&appid={api_key}"
        print(f"正在请求城市坐标: {url}")
        response = requests.get(url, timeout=10)  # 设置超时
        response.raise_for_status()  # 如果响应状态码不是 200，将抛出异常
        data = response.json()
        print(f"获取到的城市坐标数据: {data}")

        if data:
            lat = data[0]["lat"]
            lon = data[0]["lon"]
            return lat, lon
        else:
            print("错误：未找到该城市，请检查名称是否正确。")
            return None, None
    except requests.exceptions.RequestException as e:
        print(f"请求发生错误：{e}")
        return None, None

def get_weather(lat, lon, api_key):
    weather_url = "https://api.openweathermap.org/data/2.5/weather"
    params = {
        "lat": lat,
        "lon": lon,
        "appid": api_key,
        "units":"metric",  # 摄氏温度
        "lang": "zh_cn"     # 中文描述
    }
# 响应格式就是以上这样的，默认json
    try:
        print(f"正在请求天气数据: {weather_url}, 参数: {params}")
        response = requests.get(weather_url, params=params, timeout=10)  # 设置超时
        response.raise_for_status()
        return response.json()
    except requests.exceptions.RequestException as e:
        print(f"获取天气失败：{e}")
        return None

def main():
    api_key = os.getenv('OPENWEATHER_API_KEY')
    if not api_key:
        print("错误：没有找到 API Key，请检查环境变量设置。")
        return

    city = input("请输入中国城市名（例如：北京）：").strip()

    # 获取城市的坐标
    lat, lon = get_coordinates(city, api_key)

    if lat is not None and lon is not None:
        # 获取天气数据
        weather_data = get_weather(lat, lon, api_key)

        if weather_data:
            print(f"城市：{city}")
            print(f"天气：{weather_data['weather'][0]['description']}")
            print(f"温度：{weather_data['main']['temp']}°C")
            print(f"湿度：{weather_data['main']['humidity']}%")
            print(f"风速：{weather_data['wind']['speed']} m/s")
            print(f"气压：{weather_data['main']['pressure']} hPa")
            print(f"能见度：{weather_data['visibility']} 米")
            print(f"日出时间：{arrow.get(weather_data['sys']['sunrise']).to('Asia/Shanghai').format('HH:mm:ss')}")  # 转换为本地时间
            print(f"日落时间：{arrow.get(weather_data['sys']['sunset']).to('Asia/Shanghai').format('HH:mm:ss')}")  # 转换为本地时间
            # 正确写法（假设 weather_data['dt'] 是 Unix 时间戳）
            print(f"数据更新时间：{arrow.get(weather_data['dt']).to('Asia/Shanghai').format('YYYY-MM-DD HH:mm:ss')}")
        else:
            print("无法获取该城市的天气信息。")
    else:
         print("未能获取城市坐标，请检查网络连接或 API 设置。")

if __name__ == "__main__":
    main()