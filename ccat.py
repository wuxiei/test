import turtle as t

# 初始化窗口
window = t.Screen()
window.setup(width=800, height=600)
window.bgcolor('red')  # 设置背景颜色
window.tracer(0)  # 关闭自动刷新

# 创建绘图海龟
pen = t.Turtle()
pen.hideturtle()
pen.penup()
pen.goto(0, -100)
pen.pendown()
pen.fillcolor('black')

def draw():
    pen.clear()
    pen.begin_fill()
    pen.circle(100)
    pen.end_fill()
    window.update()  # 手动刷新画面

def draw_process():
    draw()
    window.ontimer(draw_process, 50)  # 递归调用实现定时重绘

# 绑定点击事件
def on_click(x, y):
    print(f"点击坐标为：{x}, {y}")

window.onscreenclick(on_click)

# 绑定退出事件
def on_exit():
    print("程序已退出")
    window.bye()

root = window._root
root.protocol("WM_DELETE_WINDOW", on_exit)

# 启动定时器
draw_process()

# 进入主循环
window.mainloop()