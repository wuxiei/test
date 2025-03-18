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
	struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
	newNode->data = data;
	newNode->next = NULL;
	//将新节点插入到链表中
	newNode->next = pCurrent->next;
	pCurrent->next = newNode;
	//更新链表长度
	myList->m_Size++;
}

//遍历链表
void foreach_LinkList(LinkList list, void(*mypirnt)(void*))//用来输出的回调函数
{
	if (list == NULL)
	{
		return;
	}
	struct LList* myList = list;//将list变为可操作

	struct LinkNode* pCurrent = myList->pHeader.next;//找到第一个有数据的结点
	for (int i = 0; i < myList->m_Size; i++)
	{
		mypirnt(pCurrent->data);
		pCurrent = pCurrent->next;//遍历
	}
}

//删除数据 - 按位置
void removeByPos_LinkList(LinkList list, int pos)
{
	if (list == NULL)
	{
		return;
	}
	struct LList* myList = list;//还原成可用
	if (pos<0 || pos>myList->m_Size - 1)
	{
		//无效的位置
		return;
	}
	//找到待删除结点的前驱节点
	struct LinkNode* pCurrent = &myList->pHeader;//创建临时节点保存头结点
	for (int i = 0; i < pos; i++)
	{
		pCurrent = pCurrent->next;//循环找到待删除结点的前驱
	}

	//缓存中 待删除结点
	struct LinkNode* pDel = pCurrent->next;//上面我们找到了待删除结点的前驱结点pCurrent那么他的next就是待删除结点，我们给他起名pDel
	//开始删除 - 使前驱结点的next直接指向待删除节点的next
	pCurrent->next = pDel->next;
	//释放待删除结点
	free(pDel);
	pDel = NULL;

	//更新链表长度
	myList->m_Size--;
}


//删除数据 - 按值
void removeByValue_LinkList(LinkList list, void* data, int(*myCompare)(void*, void*))//用于比较两个数据是否相同的回调函数
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	struct LList* myList = list;//还原成可操作
	
	//创建两个辅助指针变量 - 因为按值删除的话用字符串对比只能找到待删数据，找不到前驱
	//所以创建两个指针一个指向待删除数据，一个指向他的前驱，两个指针一起动
	struct LinkNode* pPrev = &myList->pHeader;//存放头结点
	struct LinkNode* pCurret = pPrev->next;
	for (int i = 0; i < myList->m_Size; i++)
	{
		if (myCompare(pCurret->data, data))
		{
			//开始删除
			pPrev->next = pCurret->next;
			//释放待删除结点
			free(pCurret);
			pCurret = NULL;
			//调整大小
			myList->m_Size--;

			break;//删除后跳出来
		}
		//如果全都遍历来一遍，没找到待删除数据，就让这两个指针去后边呆着去，不能让他瞎删数据
		pPrev = pCurret;
		pCurret = pCurret->next;
	}
}

//清空数据
void clear_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return;
	}
	struct LList* myList = list;

	struct LinkNode* pCurrent = myList->pHeader.next;//找到第一个有数据的结点
	for (int i = 0; i < myList->m_Size; i++)
	{
		//先记住待删除节点的后继结点
		struct LinkNode* pNext = pCurrent->next;
		free(pCurrent);
		pCurrent = pNext;
	}
	myList->pHeader.next = NULL;
	myList->m_Size = 0;
}


//返回链表长度
int size_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return -1;
	}
	struct LList* myList = list;
	return myList->m_Size;
}


//销毁链表
void destroy_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return;
	}
	clear_LinkList(list);
	free(list);
	list = NULL;
}
//定义person结构体
struct person
{
	char name[64];
	int age;
};

//用于数据对比的回调函数
int myCompare(void* data1, void* data2)
{
	struct person* p1 = data1;
	struct person* p2 = data2;

	return strcmp(p1->name, p2->name) == 0 && p1->age == p2->age;
}
//用于输出的回调函数
void myPrintPerson(void* data)
{
	struct person* p = data;
	printf("姓名： %s 年龄： %d\n", p->name, p->age);
}
void test01()
{
	//初始化链表
	LinkList list = init_LinkList();
	//创建数据
	struct person p1 = { "亚索",18 };
	struct person p2 = { "昭君",28 };
	struct person p3 = { "赵云",38 };
	struct person p4 = { "张飞",19 };
	struct person p5 = { "关雨",20 };
	struct person p6 = { "宫本",17 };

	//插入数据
	insert_LinkList(list, 0, &p1);
	insert_LinkList(list, 0, &p2);
	insert_LinkList(list, 1, &p3);
	insert_LinkList(list, 0, &p4);
	insert_LinkList(list, 1, &p5);
	insert_LinkList(list, 100, &p6);

	//遍历链表
	printf("当前链表长度为：%d\n", size_LinkList(list));
	foreach_LinkList(list, myPrintPerson);
	//张飞 关雨 昭君 赵云 亚索 宫本
	
	//删除赵云
	removeByPos_LinkList(list, 3);
	printf("------------------------------\n");
	printf("当前链表长度为：%d\n", size_LinkList(list));
	foreach_LinkList(list, myPrintPerson);

	//删除关雨
	struct person p = { "关雨",20 };
	removeByValue_LinkList(list, &p, myCompare);
	printf("------------------------------\n");
	printf("当前链表长度为：%d\n", size_LinkList(list));
	foreach_LinkList(list, myPrintPerson);
	
	//清空链表
	clear_LinkList(list);
	printf("------------------------------\n");
	printf("当前链表长度为：%d\n", size_LinkList(list));
	foreach_LinkList(list, myPrintPerson);
	
	//
}



int main()
{

	test01();
	return 0;
}