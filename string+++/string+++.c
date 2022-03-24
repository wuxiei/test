#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<stdlib.h>
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
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->c = 'w';
//	ps->i = 100;
//	ps->d = 3.14;
//}
////传值调用 - 不可修改结构体内容且占用空间大
//void print1(struct S tmp)
//{
//	printf("%c %d %IF\n", tmp.c, tmp.i, tmp.d);
//}
////传址调用 - 可以修改结构体内容且占用空间小
////若不想结构体被修改可以写成：void print2(const struct S* tmp)
//void print2(struct S* tmp)
//{
//	tmp->c = 'h';
//	printf("%c %d %IF\n", tmp->c, tmp->i, tmp->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//初始化s
//	printf("%d\n", s.i);
//	print1(s);
//	print2(&s);//！！推荐传址！！
//	return 0;
//}


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
//	printf("%d\n", sizeof(s));//48
//	return 0;
//}
//！！！ - 由于结构体特殊的存储方式 所以在设计结构体时要让占用空间小的成员尽量集中在一起


//位段 - 二进制位
//1.冒号后面的数字表示在所定义型中只取几个比特位 - 节省空间
//2.在当前编译器中从右->左开辟空间
//3.存储也是将数值换成二进制从右到左存储
//4.当存入的数的二进制位>位段数 - 则从右到左截取位段数个比特位存储
//5.当存入的数的二进制位<位段数 - 则在该二进制数左面补0
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d", sizeof(s));//8
//	return 0;
//}


//枚举类型 - 枚举类新成员常量的值在无定义情况下是从0开始顺序+1的 但在定义枚举常量时可以赋初值！！！但是之后不能改变
//enum Sex
//{
//	MALF,//0
//	FEMALE,//1
//	SECRT//2
//};
//
//enum A
//{
//	//这样赋初值是可以的
//	z = 3,//3
//	x=5//5
//};
//int main()
//{
//	enum Sex s = MALF;
//	printf("%d\n", s);//0
//	printf("%d %d", z, x);//3 5
//	return 0;
//}


//联合体 - 共用体 
//1.联合体就是成员联合共用同一块内存空间
//2.联合体成员不能同时使用，且一改都改
//3.联合变量的大小至少是最大成员的大小and当最大成员大小不是最大对齐数的整数倍时，要对齐到最大对齐数的的整数倍
//union un
//{
//	char c;//大小1 默认对齐数4 对齐数1
//	int i;//大小4 默认对齐数4 对齐数4
//	//最成员数是4 最大对齐数是4 正好是整数倍关系所以联合成员变量大小为4
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));//4
//	return 0;
//}



//大小端判断
//int main()
//{
//	int a = 1;//大端00 00 00 01  小端01 00 00 00
//	if(1 == *(char*)&a)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端");
//	}
//}


//用联合体求大小端
//int check_sys()
//{
//	union un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("小端");
//	}
//	else
//	{
//		printf("大端");
//	}
//	return 0;
//}



//动态内存开辟
//1.开辟成功，返回一个指向开辟好的空间的指针
//2.开辟失败，返回一个空指针
//3.malloc默认返回类型是void* 在对内存访问等使用过程中不方便，所以在使用时可以自己只等指针类型
//int main()
//{
//	//向内存申请10个整型的空间
//	int* p=(int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//内存开辟失败返回错误提示
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//可正常使用
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//		
//	}
//	free(p);//当动态申请内存不再使用时，应该将内存还给操作系统
//	p = NULL;//free释放指针所指的内存后仍然有能力访问到那块空间，所以为了减少不必要的麻烦要置空
//	return 0;
//}



//int main()
//{
//	//向内存申请10个整型的空间
//	int* p = (int*)malloc(INT_MAX);//int型的最大值
//	if (p == NULL)
//	{
//		//内存开辟失败返回错误提示
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//可正常使用
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//
//	}
//	return 0;
//}

