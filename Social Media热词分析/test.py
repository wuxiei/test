import requests
from bs4 import BeautifulSoup
import jieba
import re
import matplotlib.pyplot as plt
from wordcloud import WordCloud
import matplotlib.animation as animation

# 你的微博 cookies
cookies = {
    "SUB":"_2AkMQlHMIf8NxqwFRmfAUxWvgbo12yAjEieKmyILTJRMxHRl-yT9kqnAPtRB6OxRd53t0PwazLoN2IL93tBYMS5STSZqN", 
    "SUBP":"0033WrSXqPxfM72-Ws9jqgMF55529P9D9WWlBqWC8an9MTpxmSbq5fWw"
}


# 发送请求
url = "https://s.weibo.com/top/summary"
headers = {
    "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/133.0.0.0 Safari/537.36"
}

response = requests.get(url, headers=headers, cookies=cookies)

# 输出返回内容的前1000字符，检查是否成功获取数据--weibo热搜榜HTML数据
# print(response.text[:1000])

# 解析 HTML
soup = BeautifulSoup(response.text, "html.parser")

# 提取热搜标题
hot_topics = [tag.text.strip() for tag in soup.select(".td-02 a")]

# 打印前 10 个热搜标题
print("微博热搜榜：")
for i, topic in enumerate(hot_topics[:20], 1):
    print(f"{i}. {topic}")


# 加载停用词表（可以扩展）
STOPWORDS = {"的", "了", "是", "在", "就", "都"}

def clean_text(text_list):
    """合并文本，去除无关字符，进行分词"""
    text = " ".join(text_list)  # 合并热搜标题
    text = re.sub(r"[^a-zA-Z\u4e00-\u9fa5]", " ", text)  # 只保留中文、英文
    words = jieba.cut(text)  # 分词
    words = [w for w in words if len(w) > 1 and w not in STOPWORDS]  # 过滤单字和停用词
    return " ".join(words)

# 处理微博热搜关键词
cleaned_text = clean_text(hot_topics)
print("清理后的文本:", cleaned_text[:200])  # 预览部分结果



def generate_wordcloud(text, output_path="weibo_wordcloud.png"):
    """生成微博热搜词云图"""
    wordcloud = WordCloud(
        font_path="simhei.ttf",  # 指定中文字体
        width=1000, height=600,
        background_color="white",
        max_words=100
    ).generate(text)

    # 显示词云
    plt.figure(figsize=(10, 5))
    plt.imshow(wordcloud, interpolation="bilinear")
    plt.axis("off")  # 关闭坐标轴
    plt.show()

    # 保存词云图
    wordcloud.to_file(output_path)
    print(f"词云图已保存至: {output_path}")

# 生成微博热搜词云
generate_wordcloud(cleaned_text)


