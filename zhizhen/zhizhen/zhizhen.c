#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
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



//����ָ�� - ����ָ�������ָ��

//int main()
//{
//	//arr - ��Ԫ�ص�ַ
//	//&arr[0] - ��Ԫ�ص�ַ
//	//&arr - ����ĵ�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//����ָ�� - ��*p����ʾ���Ǹ�ָ��(*p)[]��ʾ���Ǹ�ָ�������ָ�� ǰ���int��ʾ��ָ�����������Ϊint��
//	return 0;
//}


//int main()
//{
//	char* arr[5];
//	char* (* pa)[5] = &arr;//����ָ�� - ָ��char*���������ָ��
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
//	print1(arr, 3, 5);//arr�Ƕ�ά������׵�ַ ��ά������׵�ַ�ǵ�һ������ĵ�ַ
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
//	int arr[5];//arr��һ����5��int��Ԫ�ص�����
//	int* parr1[10];//��������[]��ϵ������Ը� ����parr1��һ����10��int*��Ԫ�ص����� - ָ������
//	int(*parr2)[10];//parr2��һ��ָ�� ָ����10��int��Ԫ�ص����� - ����ָ��
//	int(*parr3[10])[5];//��������[]��ϵ������Ը� ����parr3����10��Ԫ�ص�����(����һ��������˵������������Ԫ�ظ���֮�ⶼ����������)
//	//ÿ��Ԫ����һ��ָ��ָ����5��int��Ԫ�ص�����
//	return 0;
//}


//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* P = &ch;
//	const char* p2 = "abcdef";
//	//ָ������- ���ָ�������
//	int* arr[10];
//	char* ch[5];
//	//����ָ�� - ָ�������ָ��
//	int *p3;//����ָ��
//	char* p4;//�ַ�ָ��
//	int arr2[5];//����
//	int(*pa)[5] = &arr2;//ָ�������ָ��
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
////--------���鴫�ε�������������---------------
//
//void test2(int *arr2[20])//ok
//{}
//
//void test2(int **arr)//ok
//{}
////----------ָ�����鴫��-----------------------
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
//	test(arr);//���鴫�δ�������Ԫ�ص�ַ ��ά������Ԫ�ص�ַ�ǵ�һ������ĵ�ַ
//	return 0;
//}


//����ָ�봫�� 
//void test(int **p)
//{}
//int main()
//{
//	int n = 10;
//	int* p = &n;
//	int** pp = &p;
//	test(pp);//����ָ�뱾��
//	teat(&p);//һ��ָ��ĵ�ַ
//  int * arr[10];
//  test(arr);//ָ������
//	return 0;
//}



//����ָ�� - ָ������ָ�� - ��ź�����ַ��ָ��
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
//	//�ڵ��ú���ʱ &������ �� ������ ���Ǻ����ĵ�ַ
//	int (*pa)(int, int) = Add;//ָ������ָ�� ���Ǹ�����ָ�� int(*pa)(int x,int y)=Add;Ҳ����
//	printf("%d\n", (*pa)(2, 3));//5   
//  ptintf("%d\n", pa(2, 3));//5   pa�ⲻ�����ö�����
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = print;//����ָ��
//	(*p)("hello bit");
//	return 0;
//}

//(*(void(*)())0)(); void(*)()-ָ�뺯�������� (void(*)())0 -��0ǿ������ת�� *(void(*)())0�����ò��� (*(void(*)())0)() -����0��ַ���ĸú��� 
//void(*signal(int, void(*)(int)))(int);
//signal(int,void(*)(int))-����һ����Ϊsignal����int,void(*)(int)���������ĺ��� ����������ķ���������void(* )(int)����
//typedef void(*pfun_t)(int);//�Զ�����������void(*)(int)�Զ����pfun_t
//pfun_t signal(int, pfun_t);


//����ָ������
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
//	int* arr[5];//ָ������
//	int (*pa)(int, int) = Add;
//	//����ָ�������
//	int(* parr[4])(int, int) = { Add,Sub,Mul,Div };//*parr[4]��һ�����ĸ�Ԫ������ ����Ԫ��������һ��������int�Ͳ����ҷ���ֵ����ҲΪint�͵ĺ���ָ��
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));//5 -1 6 0
//	}
//	return 0;
//}

//char* my_strcopy(char* dest, const char* src);
////1.дһ������ָ��pf,�ܹ�ָ��my_strcopy
//char* (*pf)(char*, const char*);
////2.дһ������ָ������pfarr���ܹ����4��my_strcopy�����ĵ�ַ
//char* (*pfarr[4])(char*, const char*);


//������
void menu()
{
	printf("**************************************\n");
	printf("*******  1.add        2.sub    *******\n");
	printf("*******  3.mul        4.div    *******\n");
	printf("*******         0.exit         *******\n");
	printf("**************************************\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��> ");
		scanf("%d", &input);
		
		switch (input)
		{
		case 1:
			printf("������������������> ");
			scanf("%d%d", &x, &y);
			printf("%d\n",Add(x, y));
			break;
		case 2:
			printf("������������������> ");
			scanf("%d%d", &x, &y);
			printf("%d\n", Sub(x, y));
			break;
		case 3:
			printf("������������������> ");
			scanf("%d%d", &x, &y);
			printf("%d\n", Mul(x, y));
			break;
		case 4:
			printf("������������������> ");
			scanf("%d%d", &x, &y);
			printf("%d\n", Div(x, y));
			break;
		case 0:
			printf("�˳�\n");
			break;
		default:
			printf("�������\n");
			break;
		}
	} while (input);
	return 0;
}