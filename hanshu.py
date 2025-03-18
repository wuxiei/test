import numpy as np
import matplotlib.pyplot as plt

# 创建x值，生成一个从-10到10的包含400个均匀分布的数值的数组
x = np.linspace(-10, 10, 400 )# 生成400个点
y = x ** 2 # 计算y值

# 创建图形 设置图像大小
plt.figure(figsize=(8, 6))

# 绘制y = x^2 X做横坐标Y做纵坐标 标签为Y=X^2 颜色为蓝色
plt.plot(x, y, label='y = x^2', color='blue')

# 添加坐标轴标签和标题
plt.xlabel('x')
plt.ylabel('y')
plt.title('Plot of y = x^2')

# 添加网格
plt.grid()

# 添加图例 图例中包括先前定义的曲线标签 第11行
plt.legend()

# 显示图形
plt.axhline(0, color='black', lw=0.5, ls='--') # x轴绘制一条水平直线，颜色黑 线宽0.5 线形为虚线
plt.axvline(0, color='black', lw=0.5, ls='--') # y轴
plt.show()