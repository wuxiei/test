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
//	char* p = "abcdef";//"abcdef"�ǳ����ַ��� �÷����ǽ��ַ����׵�ַ����ָ��p
//	printf("%c\n", *p);//%c - ��ӡ����ĸ
//	printf("%s\n", p);//%s - ��ӡ�ַ���
//
//	return 0;
//}


//int main()
//{
//	char* p = "abcdef";//"abcdef"�ǳ����ַ��� �÷����ǽ��ַ����׵�ַ����ָ��p
//	*p = 'w';//�˴��ڱ�׼c���Ի������Ǳ���Ĳ������� - ��Ϊ�����ַ������ܱ��ı�
//	printf("%s\n", p);//%s - ��ӡ�ַ���
//
//	return 0;
//}


//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";
//	if (p1 == p2)//"abcdef"�ǲ����޸ĵĳ�������ͬ �����ڴ���ʱֻѡһ�����������ĸ��ַ�洢 - p1��p2�����ַ��һ�����Ǵ�ĵ�ַһ��
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}

	//if (arr1 == arr2)//arr1 arr2�ֱ��ʾ����������ĸ��ַ ������һ�� ���haha
	//{
	//	printf("hehe\n");

	//}
	//else
	//{
	//	printf("haha\n");
	//}
//	return 0;
//}


//ָ������ ���������ָ�������
//int main()
//{
//	int* parr[4];//�������ָ�������
//	char* pch[5];//����ַ���ָ�������
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

	int* parr[] = { &arr1,&arr2,&arr3 };//����&arr��arr��һ����Ч��
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