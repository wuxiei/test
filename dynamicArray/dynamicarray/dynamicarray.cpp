#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//动态数组开

//定义动态数组结构体用来维护开辟的数组
struct dynamicArray
{
	void** pAddr;//维护在堆区真实数组的指针
	int m_capacity;//数组容量
	int m_size;//数组大小
};

//初始化动态数组结构体
struct dynamicArray* init_DynamicArray(int capacity)//这里只初始化动态数组结构体中的数组的容量
{
	if (capacity <= 0)
	{
		return NULL;//如果容量小于等于0，则返回空
	}
	struct dynamicArray * array=(struct dynamicArray *)malloc(sizeof(struct dynamicArray));
	//容量不为空，malloc一块大小为动态数组结构体大小的字节的空间，并用动态数据结构体类型的指针array来接收这块地址

	//malloc完之后，我们马上要判断内存开辟是否成功
	if (NULL == array)
	{
		return NULL;//内存开辟失败
	}
	//开辟成功
	//设置容量
	array->m_capacity = capacity;//给malloc出的这块空间设置容量
	//设置数组大小
	array->m_size = 0;
	//维护真实数组的指针指向真实数组
	array->pAddr =(void**) malloc(sizeof(void*) * array->m_capacity);
	//让维护真实数组的指针array指向我们malloc出的真实数组
	return array;
}

//插入功能
void insert_dynamicArray(struct dynamicArray* array, int pos, void* data)
{
	
	if (NULL == array)
	{
		return;//无效的指针
	}
	if (NULL == data)
	{
		return;//无效的数据
	}
	if (pos<0 || pos>array->m_size)//要插入的位置小于0或者大于真实数组成员大小，视为无效位置 - 尾插
	{
		//无效的位置 ，尾插
		pos = array->m_size;
	}
	

	//在真正开始插入时要先判断是否满载，如果满载，动态开辟一块更大内存
	if (array->m_size >= array->m_capacity)
	{
		//1.申请一块更大的空间
		int newCapacity = array->m_capacity * 2;//如果满载，我们从新开辟一块大小为原来的2倍的空间作为新的容量

		//2.创建新空间
		void** newSpace = (void**)malloc(sizeof(void*) * newCapacity);

		//3.将原有数据拷贝过来
		memcpy((void*)newSpace, array->pAddr, sizeof(void*) * array->m_capacity);

		//4.释放原有空间
		free(array->pAddr);

		//5.更改指针指向
		array->pAddr = newSpace;

		//6.更新容量大小
		array->m_capacity = newCapacity;
	}
	//插入新数据元素 - 需要把其他元素从最后一个位置依次后移
	int i = 0;
	for (i = array->m_size-1; i >= pos; i--)//pos及其后面的数据全部由后往后移动一位
	{
		array->pAddr[i+1 ] = array->pAddr[i];
	}
	//插入新元素
	array->pAddr[pos] = data;

	//更新大小
	array->m_size++;
}

//遍历数组
void foreach_dynamicArray(struct dynamicArray* array, void(*myForeach)(void*))// void(*myForeach)(void*)回调函数 - 因为数组中的数据为void型不能直接输出，要用回调函数
{
	if (NULL == array)
	{
		return;//要遍历数组为空
	}
	int i = 0;
	for (i = 0; i < array->m_size; i++)
	{
		myForeach(array->pAddr[i]);
	}
}

//创建要遍历的结构体
struct person
{
	char name[20];
	int age;
};

void myprintPerson(void* data)//回调函数 - data是void类型的数据，无法直接输出，要调用回调函数
{
	struct person* P = (struct person*)data;
	printf("姓名：%s年龄%d\n", P->name,P->age);
}
void test01()
{
	//创建动态数组
	struct dynamicArray* arr = init_DynamicArray(5);

	//准备6个person数据
	struct person p1 = {"亚瑟",18};
	struct person p2 = {"昭君",28};
	struct person p3 = {"赵云",38};
	struct person p4 = {"张飞",19};
	struct person p5 = {"关羽",20};
	struct person p6 = {"宫本",17};

	printf("当前容量：%d\n", arr->m_capacity);
	//将数据插入到动态数组中
	insert_dynamicArray(arr, 0, &p1);
	insert_dynamicArray(arr, 0, &p2);
	insert_dynamicArray(arr, 0, &p3);
	insert_dynamicArray(arr, 2, &p4);
	insert_dynamicArray(arr, 10, &p5);
	insert_dynamicArray(arr, 1, &p6);
	
	//遍历动态数组
	foreach_dynamicArray(arr, myprintPerson);

	printf("插入后容量：%d", arr->m_capacity);
}
int main()
{

	test01();
	system("pause");
	return EXIT_SUCCESS;
}