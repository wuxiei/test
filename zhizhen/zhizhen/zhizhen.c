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

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	int* parr[] = { &arr1,&arr2,&arr3 };//这里&arr和arr是一样的效果
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}