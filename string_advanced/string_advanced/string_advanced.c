#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

#include<assert.h>
#include<string.h>
//�Զ���strlen
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
//	return 0;//���hehe��Ϊstrlen�ķ����������޷��ŵ�int��
//}


//�Զ���strcpy
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*src!='\0')//ֻҪsrc�����ò�Ϊ\0 ��һֱѭ������
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;//����'\0'
//}

//�����
//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	//����dest�Ŀռ� - ��ҪҪ���ַ���ַ ���ڷ������ʱ�ҵ����ռ�
//	char* ret = dest;
//	while (*dest++=*src++)//һֱ������'\0'������� ���ʽ���Ϊ0����ѭ��
//	{
//		;
//	}
//	return ret;//����Ŀ�ĵؿռ����ʼ��ַ
//}
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}



//�Զ���strcat - �ַ���׷��
//char* my_strcat(char* dest,const char* scr)
//{
//	char* ret = dest;
//	assert(dest!= NULL);
//	assert(scr!=NULL);
//	//1.�ҵ�dest��'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��scr - �����ַ�������
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



//strcmp - �ַ����ıȽ� - ����Ա��ַ����Ĵ�С - ���ڷ���>0�������� С�ڷ���<0�������� ����0����0
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


//strncpyָ���ַ������ȵĿ���

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "hello bit";
//	strncpy(arr1, arr2, 4);//strncpy�ڿ����ַ�����С��Ŀ�س���ʱ������\0��Ŀ�ĳ��ȷǱ����ǲ����ճ����
//	//���������ַ�������С���追���ַ�������ʱ�����Ĳ�\0
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[30] = "abcde";
//	char arr2[] = "zxcvb";
//	strncat(arr1, arr2, 3);
//	printf("%s\n", arr1);//strncat׷����ɺ���Զ���һ��\0 �����Ҫ׷�ӵĳ��ȴ���Ŀ���ַ������� ���׷����ͼ�\0�������Ჹ�κζ���
//	return 0;
//}
//
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "abcdfgh";
//	int ret=strncmp(p1, p2, 3);//ֻ�Ƚ�ָ�������ַ���
//	printf("%d\n", ret);
//	return 0;
//}


//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "def";
//	char* ret = strstr(p1, p2);
//	printf("%s\n", ret);//strstr�����ҵ����ִ������ַ���ַ֮���ȫ���ַ�
//	return 0;
//}


//�Զ�������ַ���
//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = p1;//cur��¼����ƥ������ַ���ַ
//	if (*p2 == '\0')
//	{
//		return p1;//���Ҫƥ����ִ�Ϊ�� ֱ�ӷ���p1
//	}
//	while (*cur)//Ŀ�Ĵ���Ϊ��
//	{
//		s1 = cur;
//		s2 = p2;//Ϊ�˱���p2��ָ����׵�ַ��s2����p2��++
//		while ((*s1 != '\0') && (*s2 != '\0') && (*s1 == *s2))
//		{
//			s1++;//Ϊ�˱���p1��ָ����׵�ַ��s1����p1��++
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��ִ�
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
//		printf("�ִ�������");
//
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}

//strtok - �ַ����и� -- �Ƚ�����һ��arr�е���������ʱ������arr���ҵ��ĵ�һ���ָ����ĳ�\0������ס\0λ�� Ȼ�󷵻�\0ǰ��ʼ���ַ���ַ
//Ȼ�����ָ�� strtok�ٴӸղŵ�\0�������ҷָ����ĳ�\0 �ٷ���\0ǰ��ʼ���ַ���ַ.....ֱ���Ҳ����ָ����ַ���ΪNULL
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
// �ֲ�ʵ��ԭ��
//	char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//	return 0;
//}


//strerror - ������ -- ����errno - һ��ȫ�ֵĴ�������� ��c���ԵĿ⺯����ִ�й����з����˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����븳ֵ��errno��
#include<errno.h>
//���ļ�
int main()
{
	//char* str = strerror(errno);
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		printf("%s\n", strerror(errno));//������ִ��󱨸��Ӧ������
	}
	else
	{
		printf("open seccess");
	}
	return 0;
}
