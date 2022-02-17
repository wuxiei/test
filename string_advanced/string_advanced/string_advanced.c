#include<stdio.h>
#include<assert.h>
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
char* my_strcat(char* dest,const char* scr)
{
	char* ret = dest;
	assert(dest!= NULL);
	assert(scr!=NULL);
	//1.找到dest的'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.追加scr - 就是字符串拷贝
	while (*dest++ = *scr++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}