#include<stdio.h>
//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	//������32λ��˴���������b��ֵΪ��
//	printf("%d\n", b);//���ģʽ�´洢a��00 00 12 34 ǿ������ת����unsigned char���ٽ����ú�ֻ�ܷ���1���ֽڼ� - 0
//	return 0;
//}

//int main()
//{
//	char a[1000] = { 0 };//char���͵�ȡֵ��Χ-128��>127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3.....-128 127 126....3 2 1 0 strlen����0�ͽ���
//	printf("%d\n", strlen(a));//255
//	return 0;
//}



//��ӡ�������������-������������ӵ����������
// �������������
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
// �������������
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//.............
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (j == i)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//		
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//�ҳ�����
//a˵��������    b˵����c
//c˵����d       d˵��c�ں�˵
//��֪��������˵���滰��һ���� ˵�ļٻ����ҳ�����
//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer < 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
//		{
//			printf("killer�ǣ�%c\n", killer);
//		}
//	}
//	return 0;
//}



//ȷ����������
//a˵��b�ڶ����ҵ���     b˵���ҵڶ���e����
//c˵���ҵ�һ��d�ڶ�     d˵��c����ҵ���
//e˵���ҵ��ģ�a��һ
//ÿλѡ�ֶ�˵����һ���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a ++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if(((b==2)+(a==3)==1)&&
//							((b==2)+(e==4)==1)&&
//							((c==1)+(d==2)==1)&&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//						
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//int* fun(int a, int b);//�������� - �к����� ����ֵ���� ����
//int(*) fun(int a, int b);//error
//int(*fun)(int a, int b);����ָ�� 
//(int*)fun(int a, int b);//�������� - �͵�һ��д��һ��


#include<assert.h>
//����k���ַ�
////������ⷨ
//void left_move(char* arr, int k)
//{
//	assert(arr);//����
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����һ���ַ�
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}

//��������ʵ��������
//abcdef - ����2���ַ�
//ba fedc - ���������2�� ������ʣ���ұߵ�
//cdefab - ����������
//void reverse(char* left, char* right)//������
//{
//	assert(left!=NULL);
//	assert(right!=NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr+k-1);//�������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//��������
//}
//int is_left_move(char* s1, char* s2)//�ж�s1�����ܷ�õ�s2
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);//����1���ַ�
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}
////int main()
////{
////	char arr[] =  "abcdef" ;
////	left_move(arr, 2);
////	printf("%s\n", arr);
////	return 0;
////}


//�ַ�����׷�� - strcat����׷���ַ�������
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	
//	return 0;
//}
//�ַ���׷�� - ����׷���ַ�������� - strncat(str1,str1,len)


//�ж�s2�Ƿ���s1�����õ��� - �������� - ��s1׷��������Ȼ���ж�s2�Ƿ�Ϊs1���Ӵ�
int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		return 0;
	}
	//1.��str1׷��������
	
	strncat(str1, str1, len1);
	
	//2.�ж�str2�ǲ���׷�Ӻ��str1���Ӵ�
	//strstr - ���Ӵ� - ���Ӵ��������ַ���ַ�������Ӵ����ؿ�ָ��
	char* ret = strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}