import sys
import requests
import os
import arrow
from PyQt6.QtWidgets import QApplication, QWidget, QLabel, QLineEdit, QPushButton, QVBoxLayout, QMessageBox, QHBoxLayout
from PyQt6.QtGui import QIcon

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
            QMessageBox.critical(None, "错误", "未找到该城市，请检查名称是否正确。")
            return None, None
    except requests.exceptions.RequestException as e:
        QMessageBox.critical(None, "错误", f"请求发生错误：{e}")
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
        QMessageBox.critical(None, "错误", f"获取天气失败：{e}")
        return None

class WeatherApp(QWidget):
    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.setWindowTitle("天气查询程序")
        self.setWindowIcon(QIcon('weather_icon.png'))  # 设置窗口图标
        self.resize(250,125)

        self.layout = QVBoxLayout()

        self.label_instruction = QLabel("请输入城市名：")
        self.label_instruction.setStyleSheet("font-size: 16px;")
        self.layout.addWidget(self.label_instruction)

        self.entry_city = QLineEdit()
        self.entry_city.setPlaceholderText("例如：北京")
        self.entry_city.setStyleSheet("font-size: 14px; padding: 5px;")
        self.layout.addWidget(self.entry_city)

        self.button_get_weather = QPushButton("获取天气")
        self.button_get_weather.setStyleSheet("""
            QPushButton {
                font-size: 14px;
                padding: 10px;
                background-color: #4CAF50;
                color: white;
                border: none;
                border-radius: 5px;
            }
            QPushButton:hover {
                background-color: #45a049;
            }
        """)
        self.button_get_weather.clicked.connect(self.on_get_weather)
        self.layout.addWidget(self.button_get_weather)

        self.label_result = QLabel("")
        self.label_result.setStyleSheet("font-size: 14px; padding: 10px;")
        self.layout.addWidget(self.label_result)

        self.setLayout(self.layout)

    def on_get_weather(self):
        city = self.entry_city.text().strip()
        if not city:
            QMessageBox.warning(self, "输入错误", "城市名不能为空！")
            return

        api_key = os.getenv('OPENWEATHER_API_KEY')
        if not api_key:
            QMessageBox.critical(self, "错误", "未找到 API Key，请检查环境变量设置。")
            return

        lat, lon = get_coordinates(city, api_key)
        if lat is not None and lon is not None:
            weather_data = get_weather(lat, lon, api_key)
            if weather_data:
                self.label_result.setText(
                    f"城市：{city}\n"
                    f"天气：{weather_data['weather'][0]['description']}\n"
                    f"温度：{weather_data['main']['temp']}°C\n"
                    f"湿度：{weather_data['main']['humidity']}%\n"
                    f"风速：{weather_data['wind']['speed']} m/s\n"
                    f"气压：{weather_data['main']['pressure']} hPa\n"
                    f"能见度：{weather_data['visibility']} 米\n"
                    f"日出时间：{arrow.get(weather_data['sys']['sunrise']).to('Asia/Shanghai').format('HH:mm:ss')}\n"
                    f"日落时间：{arrow.get(weather_data['sys']['sunset']).to('Asia/Shanghai').format('HH:mm:ss')}\n"
                    f"数据更新时间：{arrow.get(weather_data['dt']).to('Asia/Shanghai').format('YYYY-MM-DD HH:mm:ss')}"
                )
            else:
                self.label_result.setText("无法获取该城市的天气信息。")
        else:
            self.label_result.setText("未能获取城市坐标，请检查网络连接或 API 设置。")

if __name__ == '__main__':
    app = QApplication(sys.argv)
    ex = WeatherApp()
    ex.show()
    sys.exit(app.exec())