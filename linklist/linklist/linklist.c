#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//创建链表结点结构体
struct LinkNode
{
	void* data;//数据域
	struct LinkNode* next;//指针域
};

//链表结构体
struct LList
{
	struct LinkNode pHeader;//头结点
	int m_Size;//链表长度
};

typedef void* LinkList;//为了不让用户拿到真正的链表瞎改，我们重命名一个void*型的链表给用户看
//初始化链表
LinkList init_LinkList()//对用户拿到的链表初始化
{
	struct LList* myList = malloc(sizeof(struct LList));
	if (myList == NULL)
	{
		return NULL;
	}

	//初始化链表结构体
	myList->pHeader.data = NULL;
	myList->pHeader.next = NULL;
	myList->m_Size = 0;

	return myList;
}

//插入结点
void insert_LinkList(LinkList list, int pos, void* data)
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	struct LList* myList = list;//把不能操作的LinkLis还原成可以操作的list
	if (pos<0 || pos>myList->m_Size)
	{
		//无效的位置，尾插
		pos = myList->m_Size;
	}
	
	//有效插入
	//创建临时结点
	struct LinkNode* pCurrent = &myList->pHeader;//创建临时节点存放链表头结点
	for(int i=0;i<pos;i++)
	{
		pCurrent = pCurrent->next;//通过循环找到要插入位置的前驱节点
	};

	//创建出新结点

}
