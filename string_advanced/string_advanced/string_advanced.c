#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<assert.h>
#include<string.h>
//自定义strlen
//int  My_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	int len = My_strlen("abcdef");
//	printf("%d", len);
//	return 0;
//}

//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;//输出hehe因为strlen的返回类型是无符号的int型
//}


//自定义strcpy
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*src!='\0')//只要src解引用不为\0 就一直循环拷贝
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//拷贝'\0'
//}

//精简版
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	//拷贝dest的空间 - 主要要首字符地址 用于返回输出时找到这块空间
//	char* ret = dest;
//	while (*dest++=*src++)//一直拷贝到'\0'拷贝完成 表达式结果为0跳出循环
//	{
//		;
//	}
//	return ret;//返回目的地空间的起始地址
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//自定义strcat - 字符串追加
//char* my_strcat(char* dest,const char* scr)
//{
//	char* ret = dest;
//	assert(dest!= NULL);
//	assert(scr!=NULL);
//	//1.找到dest的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加scr - 就是字符串拷贝
//	while (*dest++ = *scr++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[30] = "hello";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//strcmp - 字符串的比较 - 逐个对比字符串的大小 - 大于返回>0的任意数 小于返回<0的任意数 等于0返回0
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "sert";
//	int ret=strcmp( p1,p2);
//	if (ret > 0)
//	{
//		printf("p1 > p2" );
//	}
//	else if (ret < 0)
//	{
//		printf("p1 < p2" );
//	}
//	else
//	{
//		printf("%p1 =p2" );
//	}
//
//	return 0;
//}


//my_strcmp
//int my_strcmp(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	while (*p1 == *p2)
//	{
//		if (*p1 == '\0')
//		{
//			return 0;
//		}
//		p1++;
//		p2++;
//	}
//	/*if (*p1 > *p2)
//		return 1;
//	else
//		return -1;*/
//	//return (*p1 - *p2);
//}
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "sert";
//	int ret = my_strcmp(p1, p2);
//	printf("%d\n", ret);
//	return 0;
//}


//strncpy指定字符串长度的拷贝

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);//strncpy在拷贝字符长度小于目地长度时不拷贝\0且目的长度非被覆盖部分照常输出
//	//当被拷贝字符串长度小于需拷贝字符串长度时不够的补\0
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "abcde";
//	char arr2[] = "zxcvb";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);//strncat追加完成后会自动加一个\0 且如果要追加的长度大于目标字符串本身 则就追加完就加\0结束不会补任何东西
//	return 0;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdfgh";
//	int ret=strncmp(p1, p2, 3);//只比较指定长的字符串
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	printf("%s\n", ret);//strstr返回找到的字串的首字符地址之后的全部字符
//	return 0;
//}


//自定义查找字符串
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = p1;//cur记录可能匹配的首字符地址
//	if (*p2 == '\0')
//	{
//		return p1;//如果要匹配的字串为空 直接返回p1
//	}
//	while (*cur)//目的串不为空
//	{
//		s1 = cur;
//		s2 = p2;//为了保留p2所指向的首地址用s2代替p2做++
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;//为了保留p1所指向的首地址用s1代替p1做++
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//找到字串
//		}
//		cur++;
//	}
//	return NULL;
//}
//int main()
//{
//	char* p1 = "abcddefrgh";
//	char* p2 = "def";
//	char* ret = my_strstr(p1, p2);
//	if (ret == NULL)
//	{
//		printf("字串不存在");
//
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strtok - 字符串切割 -- 先将拷贝一份arr中的数据在临时拷贝的arr中找到的第一个分隔符改成\0，并记住\0位置 然后返回\0前开始首字符地址
//然后传入空指针 strtok再从刚才的\0处继续找分隔符改成\0 再返回\0前开始首字符地址.....直到找不到分隔符字符串为NULL
//int main()
//{
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//	/*char* ret = NULL;
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}*/
// 
// 分布实现原理
//	char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	return 0;
//}


//strerror - 错误码 -- 参数errno - 一个全局的错误码变量 当c语言的库函数在执行过程中发生了错误，就会把对应的错误码赋值到errno中
#include<errno.h>
//打开文件
int main()
{
	//char* str = strerror(errno);
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));//如果出现错误报告对应错误码
	}
	else
	{
		printf("open seccess");
	}
	return 0;
}
