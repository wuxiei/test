#include<stdio.h>

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);//abcdef
//	printf("%s\n", pc);//abcdef
//
//	return 0;
//
//}

//
//int main()
//{
//	char* p = "abcdef";//"abcdef"是常量字符串 该方法是将字符串首地址传给指针p
//	printf("%c\n", *p);//%c - 打印首字母
//	printf("%s\n", p);//%s - 打印字符串
//
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";//"abcdef"是常量字符串 该方法是将字符串首地址传给指针p
//	*p = 'w';//此处在标准c语言环境中是报错的不能运行 - 因为常量字符串不能被改变
//	printf("%s\n", p);//%s - 打印字符串
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (p1 == p2)//"abcdef"是不可修改的常量且相同 所以在储存时只选一个数组的首字母地址存储 - p1、p2本身地址不一样但是存的地址一样
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}

	//if (arr1 == arr2)//arr1 arr2分别表示各数组首字母地址 不可能一样 结果haha
	//{
	//	printf("hehe\n");

	//}
	//else
	//{
	//	printf("haha\n");
	//}
//	return 0;
//}


//指针数组 是用来存放指针的数组
//int main()
//{
//	int* parr[4];//存放整形指针的数组
//	char* pch[5];//存放字符型指针的数组
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int arr[4]={ &a,&b,&c,&d };
//
//	return 0;
//}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}



//数组指针 - 用来指向数组的指针

//int main()
//{
//	//arr - 首元素地址
//	//&arr[0] - 首元素地址
//	//&arr - 数组的地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//数组指针 - （*p）表示这是个指针(*p)[]表示这是个指向数组的指针 前面的int表示所指向的数组类型为int型
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (* pa)[5] = &arr;//数组指针 - 指向char*类型数组的指针
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	//int(*pa)[10] = &arr;
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", *(*pa + i));//*pa==arr
//	//}
//
//	/*for (i = 0; i < 10; i++)
//	{
//		printf("%d ", (*pa)[i]);
//	}*/
//	return 0;
// }



//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	return 0;
//}

//void print1(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			//printf("%d ", *(*(p + i) + j));
//			//printf("%d ", (*(p + i))[j]);
//			//printf("%d ",p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);//arr是二维数组的首地址 二维数组的首地址是第一行数组的地址
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", arr[i]);
//		printf("%d ", *(p + i));
//		printf("%d ", *(arr + i));//arr[i]==p[i]==*(p+i)==*(arr+i)
//	}
//	return 0;
//}


//int main()
//{
//	int arr[5];//arr是一个有5个int型元素的数组
//	int* parr1[10];//数组名和[]结合的优先性高 所以parr1是一个有10个int*型元素的数组 - 指针数组
//	int(*parr2)[10];//parr2是一个指针 指向有10个int型元素的数组 - 数组指针
//	int(*parr3[10])[5];//数组名和[]结合的优先性高 所以parr3是有10个元素的数组(对于一个数组来说除了数组名和元素个数之外都是数组类型)
//	//每个元素是一个指针指向有5个int型元素的数组
//	return 0;
//}


//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* P = &ch;
//	const char* p2 = "abcdef";
//	//指针数组- 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	//数组指针 - 指向数组的指针
//	int *p3;//整形指针
//	char* p4;//字符指针
//	int arr2[5];//数组
//	int(*pa)[5] = &arr2;//指向数组的指针
//	return 0;
//}


//void test(int arr[])//ok
//{}
//
//void test(int arr[10])//ok
//{}
//
//void test(int *arr)//ok
//{}
////--------数组传参的三个基本方法---------------
//
//void test2(int *arr2[20])//ok
//{}
//
//void test2(int **arr)//ok
//{}
////----------指针数组传参-----------------------
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test2(arr2);
//	return 0;
//}


//void test(int arr[3][5])//ok
//{}
//
//void test(int arr[][5])//ok
//{}

//void test(int arr[3][])//error
//{}

//void test(int *arr)//error
//{}
//
//void test(int* arr[5])//error
//{}
//
//void test(int **arr)//error
//{}
//
//void test(int (*arr)[5])//ok
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);//数组传参传的是首元素地址 二维数组首元素地址是第一行数组的地址
//	return 0;
//}


//二级指针传参 
//void test(int **p)
//{}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);//二级指针本身
//	teat(&p);//一级指针的地址
//  int * arr[10];
//  test(arr);//指针数组
//	return 0;
//}



//函数指针 - 指向函数的指针 - 存放函数地址的指针
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	printf("%d\n", Add(a, b));
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	//在调用函数时 &函数名 和 函数名 都是函数的地址
//	int (*pa)(int, int) = Add;//指向函数的指针 它是个函数指针 int(*pa)(int x,int y)=Add;也可以
//	printf("%d\n", (*pa)(2, 3));//5
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = print;//函数指针
//	(*p)("hello bit");
//	return 0;
//}