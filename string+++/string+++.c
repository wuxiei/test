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
struct Stu
{
	char name[20];
	char tele[12];
	char sex[10];
	int age;
}s4,s5,s6;//全局变量

struct Stu s3;//全局变量

int main()
{
	struct Stu s1;//局部变量
	struct Stu s2;//局部变量
	struct Stu s7 = { "张三","1233445","男",14};
	printf("%s %s %s %d\n", s7.name, s7.tele, s7.sex, s7.age);
	return 0;
}