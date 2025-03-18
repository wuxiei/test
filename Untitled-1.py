import matplotlib.pyplot as plt

#定义恐龙向量
dino_vectors = [(6,4), (3,1), (1,2), (-1,5), (-2,5), (-3,4), (-4,4),
(-5,3), (-5,2), (-2,2), (-5,1), (-4,0), (-2,1), (-1,0), (0,-3),
(-1,-4), (1,-4), (2,-3), (1,-2), (3,-1), (5,1)
]

#解压向量以获取x和y轴坐标
x,y=zip(*dino_vectors)

#设置图片大小
plt.figure(figsize=(6,6))

#绘制点
plt.scatter(x,y,color='blue')

#连接线
plt.plot(x,y,color='green')
#手动连接第一和第二个点
#（5，1）（6，4）两个点，手动连接时把X轴放一起 Y轴放一起
plt.plot([5,6],[1,4],color='red')

plt.xlabel('X-axis')
plt.ylabel('Y-axis')

plt.title('konglong')

plt.show()
