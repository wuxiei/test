import requests
import os

def get_coordinates(city, api_key):
    try:
        url = f"http://api.openweathermap.org/geo/1.0/direct?q={city}&limit=1&appid={api_key}"
        response = requests.get(url)
        response.raise_for_status()  # 如果响应状态码不是 200，将抛出异常
        return response.json()
    except requests.exceptions.RequestException as e:
        print(f"请求发生错误：{e}")
        return None

def main():
   # os.environ['OPENWEATHER_API_KEY']='edec84496e3b065f940a8289c130f576'
    api_key = os.getenv('OPENWEATHER_API_KEY')
    city = input("请输入中国城市名（例如：北京）：").strip()
    
    coordinates = get_coordinates(city, api_key)
    if coordinates:
        print(f"城市坐标：{coordinates}")
    else:
        print("未能获取城市坐标，请检查网络连接或 API 设置。")

if __name__ == "__main__":
    main()