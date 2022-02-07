#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include<stdlib.h>
#include<string.h>
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
//  ptintf("%d\n", pa(2, 3));//5   pa解不解引用都可以
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

//(*(void(*)())0)(); void(*)()-指针函数的类型 (void(*)())0 -将0强制类型转换 *(void(*)())0解引用操作 (*(void(*)())0)() -调用0地址处的该函数 
//void(*signal(int, void(*)(int)))(int);
//signal(int,void(*)(int))-这是一个名为signal且有int,void(*)(int)两个参数的函数 而这个函数的返回类型是void(* )(int)函数
//typedef void(*pfun_t)(int);//自定义类型名将void(*)(int)自定义成pfun_t
//pfun_t signal(int, pfun_t);


//函数指针数组
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int* arr[5];//指针数组
//	int (*pa)(int, int) = Add;
//	//函数指针的数组
//	int(* parr[4])(int, int) = { Add,Sub,Mul,Div };//*parr[4]是一个有四个元素数组 数组元素类型是一个有两个int型参数且返回值类型也为int型的函数指针
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}

//char* my_strcopy(char* dest, const char* src);
////1.写一个函数指针pf,能够指向my_strcopy
//char* (*pf)(char*, const char*);
////2.写一个函数指针数组pfarr，能够存放4个my_strcopy函数的地址
//char* (*pfarr[4])(char*, const char*);


//计算器
//void menu()
//{
//	printf("**************************************\n");
//	printf("*******  1.add        2.sub    *******\n");
//	printf("*******  3.mul        4.div    *******\n");
//	printf("*******         0.exit         *******\n");
//	printf("**************************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int x = 0;
//int y = 0;
//int input = 0;
//void Calc(int (*pf)(int, int))//回调函数写法
//{
//	printf("请输入两个操作数：> ");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//函数指针数组的写法
//	do
//	{
//		menu();
//		printf("请选择：> ");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//
//
//		////函数指针数组的写法 - input是数组元素下标   - 一般pfArr这种函数指针数组被称为-转移表
//		//if (input >= 1 && input <= 4)
//		//{
//		//	printf("请输入两个操作数:> ");
//		//	scanf("%d%d", &x, &y);
//		//	int ret = pfArr[input](x, y);
//		//	printf("%d\n", ret);
//		//}
//		//else if(input==0)
//		//{
//		//	printf("退出\n");
//		//}
//		//else
//		//{
//		//	printf("选择错误\n");
//		//}
//		
//		
//		//switch循环写法
//		/*switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数：> ");
//			scanf("%d%d", &x, &y);
//			printf("%d\n",Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数：> ");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数：> ");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数：> ");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}*/
//	} while (input);
//	return 0;
//}


//指向函数指针数组的指针
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//取出数组的地址
//	int(*pf)(int, int);//函数指针
//	int (*pfArr[4])(int, int);//pfArr是一个数组 - 函数指针数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//指向函数指针数组的指针
//	//ppfArr是个数组指针 - 指针指向的数组有四个元素 每个元素的类型是函数指针 int(* )(int,int)
//}

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main() 
//{
//	test(print);
//	return 0;
//}


//冒泡排序


//int cmp_int(const void* e1, const void* e2)
//{
//	//比较两个整型值
//	return *(int*)e1 - *(int*)e2;//将e1 e2强制类型转化成int* 型
//	//定义规定d1>e2返回大于0的数 e1=e2返回0 e1<e2返回<0的数
//
//}
//
////void bubble_sort(int arr[], int sz)
////{
////	int i = 0;
////	//趟数
////	for (i = 0; i < sz - 1; i++)
////	{
////		//一趟冒泡排序
////		int j = 0;
////		for (j = 0; j <sz-1-i ; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int tmp = arr[j];
////				arr[j]=arr[j + 1];
////				arr[j + 1] = tmp;
////			}
////		}
////	}
////}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
////库函数qsort -quick sort 可以对任意类型的元素排序
////void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));qsort的定义
////void*base -待排序数组的首元素地址  
// size_t num - 待排序数组元素个数  
// size_t width - 待排序数组每个元素的大小-单位字节  
// int(*cmp)(const void* e1, const void* e2)) - 自定义的用来比较两个元素的函数指针 函数指针的两个参数是待比较的两个元素的地址
////void*可以接受任意类型的指针 但是由于所接受类型不定所以 不能解引用 不能进行+ -操作
// 
//	//bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int cmp_float(const* e1, const* e2)
//{
//	return (int)( * (float*)e1 - *(float*)e2);
//}
//void test()
//{
//	float f[] = { 9.0,8.0,7.0,6.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}


struct stu
{
	char name[20];
	int age;
};

//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void test2()
//{
//	
//	struct stu s[3] = { {"zhangsan",20},{"lesi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}

//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//name是字符串不能直接比大小 要用strcmp e1>e2 return >0的数 e1<e2 return <0的数 e1=e2 return 0
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//void test3()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lesi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}


//万能冒泡排序 - 自主设计qsort

void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width,int(*cmp(void*e1,void*e2)))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			//两个元素的比较
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				//交换
				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
			}
		}
	}
}


int cmp_int(const void* e1, const void* e2)
{
	//比较两个整型值
	return *(int*)e1 - *(int*)e2;

}
void test4()
{
	 int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	 int sz = sizeof(arr) / sizeof(arr[0]);
	 bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}
void test5() 
{
	struct stu s[3] = { {"zhangsan",20},{"lesi",30},{"wangwu",10} };
	int sz = sizeof(s) / sizeof(s[0]);
	//bubble_sort(s, sz, sizeof(s[0]), );
}
int main()
{
	//test();
	//test2();
	//test3();
	test4();
	test5();
	return 0;
}