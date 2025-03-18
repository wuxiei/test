# import os
# """api_key=os.getenv('OPENWEATHER_API_KEY')
# print(f"要是={api_key}")"""


# from dotenv import load_dotenv

# print(os.getcwd())#D:\Pythoncode
# """工作目录在D:\Pythoncode下，所以要在D:\Pythoncode下创建OpenWeatherApiKey.env文件，文件内容为OPENWEATHER_API_KEY=你的API密钥"""

# # 加载 .env 文件

# api_key=load_dotenv('OpenWeatherApiKey.env')
# #返回值是bool类型
# print(f"key:{api_key}")#True


from pathlib import Path
from dotenv import load_dotenv

# 动态获取 .env 的绝对路径（向上两级）
env_path = Path('pythoncode').resolve().parent.parent / ".env"
api_key=load_dotenv(dotenv_path=env_path)
# api_key=load_dotenv('OpenWeatherApiKey.env')
# #返回值是bool类型
print(f"key:{api_key}")#True