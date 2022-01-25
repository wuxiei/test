#include<stdio.h>
#include<assert.h>

//my_strcpy的实现；

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//'\0'
//}

//优化一；
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)//后置++ 先赋值再++
//		{
//			;
//		}
//	}
//}


//优化二；
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);//断言
//	assert(src != NULL);//断言 满足括号里的条件就报错 不满足就不起任何作用
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	//strcpy
//	//字符串拷贝
//	char arr1[] = "#########";
//	char arr2[] = "bit";
//
//	printf("%s\n", my_strcpy(arr1, arr2));
//
//	return 0;
//}




//my_strlen的实现
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str != NULL);//保证指针的有效性
//
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
