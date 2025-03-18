import turtle
from sys import stdout

# 隐藏tutle画布的默认窗口标题
turtle.title("圈小猫游戏")

# 设置画布大小和背景颜色
canvas = turtle.Canvas(
    width=800,
    height=600,
    bgcolor="black"
)
turtle.unicode()

# 定义正六边形顶点坐标
hexagon = {
    "top-left": (-25, 100),
    "top-right": (25, 100),
    "bottom-right": (25, -50),
    "bottom-left": (-25, -50)
}

# 小猫和圈锁样式定义
cat_style = ("C", "white")
lock_style = ("L", "red")

def draw_hexagons():
    for coord in hexagon.values():
        canvas.penup()
        canvas.goto(coord)
        canvas.write("X", font="Arial", fontsize=24, align="center")
        canvas.penup()

def handle_input(x, y):
    global current_pos, circle_locks

    try:
        # 绘制当前圈锁位置
        for pos in circle_locks:
            canvas.clear()
            canvas.goto(pos)
            canvas.write(lock_style[0], font="Arial", fontcolor=lock_style[1])

        # 绘制小猫的位置
        if current_pos in hexagon.values():
            canvas.clear()
            canvas.goto(current_pos)
            canvas.write(cat_style[0], font="Arial", fontcolor=cat_style[1])

        # 等待用户输入坐标
        input_str = stdout.read().strip()
        x, y = map(int, input_str.split())

        # 处理圈锁输入
        if len(circle_locks) == 2:
            print("已经设置了两个圈锁，无法再添加新的。")
            return

        # 验证输入坐标是否在正六边形范围内
        for coord in hexagon.values():
            if x == coord[0] and y == coord[1]:
                circle_locks.add((x, y))
                print(f"成功设置圈锁在位置 ({x}, {y})。")
                break
        else:
            print("输入的坐标不在正六边形顶点上，请重新输入。")

    except KeyboardInterrupt:
        print("\n用户退出程序中...")
        exit()

def game_over():
    print("游戏结束！")
    exit()

# 初始化变量
current_pos = hexagon["top-left"]
circle_locks = set()

# 进入主循环
try:
    while True:
        # 画出当前圈锁位置
        for pos in circle_locks:
            canvas.clear()
            canvas.goto(pos)
            canvas.write(lock_style[0], font="Arial", fontcolor=lock_style[1])
        
        # 画出小猫的位置
        if current_pos in hexagon.values():
            canvas.clear()
            canvas.goto(current_pos)
            canvas.write(cat_style[0], font="Arial", fontcolor=cat_style[1])

        # 绘制正六边形顶点标记
        draw_hexagons()

        # 显示帮助信息
        print("\n输入坐标时，使用以下格式：")
        print("例如：输入 '5, -40' 来设置圈锁在该位置。")

        # 等待用户输入
        input_str = stdout.read().strip()
        x, y = map(int, input_str.split())
        handle_input(x, y)

except EOFError:
    print("\n用户未提供有效的坐标，程序结束。")
    exit()

# 退出时清理turtle画布
try:
    canvas.clear()
    canvas.write("程序已关闭。", font="Arial", align="center")
finally:
    turtle.done()