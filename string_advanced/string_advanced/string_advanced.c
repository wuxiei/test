#include<stdio.h>
#include<assert.h>
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
char* my_strcat(char* dest,const char* scr)
{
	char* ret = dest;
	assert(dest!= NULL);
	assert(scr!=NULL);
	//1.�ҵ�dest��'\0'
	while (*dest != '\0')
	{
		dest++;
	}
	//2.׷��scr - �����ַ�������
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