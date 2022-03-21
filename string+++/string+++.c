#include<stdio.h>
#include<string.h>
#include<assert.h>

//处理内存重叠的字符串拷贝
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 ,6,7,8,9,10};
//	memmove(arr+2,arr,20);
//	return 0;
//}

//my_memmove的实现
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest);
//	assert(src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//前->后
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//
//	}
//	else
//	{
//		//后->前
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);//这个字符串移动操作单位是字节所以加count可以找到最后一个字节
//			//然后count-- 就可以实现从后往前移动
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	my_memmove(arr + 2, arr, 20);
//	return 0;
//}

//memcmp - 字符串比较
//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00....
//	//01 00 00 00 02 00 00 00 05 00 00 00....
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);//memcmp是按字节拷贝的
//	printf("%d\n", ret); 
//	return 0;
//}


//memset - 内存设置 - 将arr中指定字节长度的内存设置成指定的内容
//int main()
//{
//	char arr[20] = "";
//	memset(arr, '#', 10);//内存设置单位是字节
//	return 0;
//}


//结构体声明
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//全局变量
//
//struct Stu s3;//全局变量
//
//int main()
//{
//	struct Stu s1;//局部变量
//	struct Stu s2;//局部变量
//	struct Stu s7 = { "张三","1233445","男",14};
//	printf("%s %s %s %d\n", s7.name, s7.tele, s7.sex, s7.age);
//	return 0;
//}

//正确的自引用方法 - 类似于数据结构链表的查找
//struct Node
//{
//	int data;
//	struct Node* next;//指针的方法区=去自引用
//};


//struct T
//{
//	double w;
//	int age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct S s = { 'c',{3.14,30},6,7.7,"hello.." };
//	printf("%c %If %d %d %If %s\n", s.c, s.st.w, s.st.age, s.a, s.d, s.arr);
//	return 0;
//}

//结构体所占内存大小问题存在 - 结构体内存对齐
//1.结构体第一个成员变量的地址就是结构体起始地址
//2.其余成员变量；首先找对妻数 - 就是类型大小与默认对齐数中的较小值（vs中默认对齐数为8）然后找对齐数整数倍的地址放进去
//3.整个结构体大小为最大对齐数的整数倍（整数倍就是看偏移量 - 第一个成员内存地址偏移量为0 第二个为1.....）

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//	return 0;
//}

//默认对齐数可以更改
#pragma pack(4)//将默认对齐数改为4
struct S
{
	char c;
	int i;
	double d;
};
void Init(struct S* ps)
{
	ps->c = 'w';
	ps->i = 100;
	ps->d = 3.14;
}
//传值调用 - 不可修改结构体内容且占用空间大
void print1(struct S tmp)
{
	printf("%c %d %IF\n", tmp.c, tmp.i, tmp.d);
}
//传址调用 - 可以修改结构体内容且占用空间小
//若不想结构体被修改可以写成：void print2(const struct S* tmp)
void print2(struct S* tmp)
{
	tmp->c = 'h';
	printf("%c %d %IF\n", tmp->c, tmp->i, tmp->d);
}
int main()
{
	struct S s = { 0 };
	Init(&s);//初始化s
	printf("%d\n", s.i);
	print1(s);
	print2(&s);//！！推荐传址！！
	return 0;
}
