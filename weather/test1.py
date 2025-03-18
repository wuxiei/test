import os

# 尝试读取环境变量
#os.environ['OPENWEATHER_API_KEY']='f92bad580ae249ae53dbb466aebd9537'
api_key = os.getenv('OPENWEATHER_API_KEY')


if api_key is None:
    print("API Key not found!")
else:
    print("API Key found:", api_key)