#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 4996)
#include<stdlib.h>
#include<string.h>
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
//void menu()
//{
//	printf("**************************************\n");
//	printf("*******  1.add        2.sub    *******\n");
//	printf("*******  3.mul        4.div    *******\n");
//	printf("*******         0.exit         *******\n");
//	printf("**************************************\n");
//}
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
//int x = 0;
//int y = 0;
//int input = 0;
//void Calc(int (*pf)(int, int))//�ص�����д��
//{
//	printf("������������������> ");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	
//	int(*pfArr[5])(int, int) = { 0,Add,Sub,Mul,Div };//����ָ�������д��
//	do
//	{
//		menu();
//		printf("��ѡ��> ");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}
//
//
//		////����ָ�������д�� - input������Ԫ���±�   - һ��pfArr���ֺ���ָ�����鱻��Ϊ-ת�Ʊ�
//		//if (input >= 1 && input <= 4)
//		//{
//		//	printf("����������������:> ");
//		//	scanf("%d%d", &x, &y);
//		//	int ret = pfArr[input](x, y);
//		//	printf("%d\n", ret);
//		//}
//		//else if(input==0)
//		//{
//		//	printf("�˳�\n");
//		//}
//		//else
//		//{
//		//	printf("ѡ�����\n");
//		//}
//		
//		
//		//switchѭ��д��
//		/*switch (input)
//		{
//		case 1:
//			printf("������������������> ");
//			scanf("%d%d", &x, &y);
//			printf("%d\n",Add(x, y));
//			break;
//		case 2:
//			printf("������������������> ");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("������������������> ");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("������������������> ");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("�������\n");
//			break;
//		}*/
//	} while (input);
//	return 0;
//}


//ָ����ָ�������ָ��
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//ȡ������ĵ�ַ
//	int(*pf)(int, int);//����ָ��
//	int (*pfArr[4])(int, int);//pfArr��һ������ - ����ָ������
//	int(*(*ppfArr)[4])(int, int) = &pfArr;//ָ����ָ�������ָ��
//	//ppfArr�Ǹ�����ָ�� - ָ��ָ����������ĸ�Ԫ�� ÿ��Ԫ�ص������Ǻ���ָ�� int(* )(int,int)
//}

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main() 
//{
//	test(print);
//	return 0;
//}


//ð������


//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ
//	return *(int*)e1 - *(int*)e2;//��e1 e2ǿ������ת����int* ��
//	//����涨d1>e2���ش���0���� e1=e2����0 e1<e2����<0����
//
//}
//
////void bubble_sort(int arr[], int sz)
////{
////	int i = 0;
////	//����
////	for (i = 0; i < sz - 1; i++)
////	{
////		//һ��ð������
////		int j = 0;
////		for (j = 0; j <sz-1-i ; j++)
////		{
////			if (arr[j] > arr[j + 1])
////			{
////				int tmp = arr[j];
////				arr[j]=arr[j + 1];
////				arr[j + 1] = tmp;
////			}
////		}
////	}
////}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
////�⺯��qsort -quick sort ���Զ��������͵�Ԫ������
////void qsort(void* base, size_t num, size_t width, int(*cmp)(const void* e1, const void* e2));qsort�Ķ���
////void*base -�������������Ԫ�ص�ַ  
// size_t num - ����������Ԫ�ظ���  
// size_t width - ����������ÿ��Ԫ�صĴ�С-��λ�ֽ�  
// int(*cmp)(const void* e1, const void* e2)) - �Զ���������Ƚ�����Ԫ�صĺ���ָ�� ����ָ������������Ǵ��Ƚϵ�����Ԫ�صĵ�ַ
////void*���Խ����������͵�ָ�� �����������������Ͳ������� ���ܽ����� ���ܽ���+ -����
// 
//	//bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int cmp_float(const* e1, const* e2)
//{
//	return (int)( * (float*)e1 - *(float*)e2);
//}
//void test()
//{
//	float f[] = { 9.0,8.0,7.0,6.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f ", f[j]);
//	}
//}


//struct stu
//{
//	char name[20];
//	int age;
//};

//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void test2()
//{
//	
//	struct stu s[3] = { {"zhangsan",20},{"lesi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//}

//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//name���ַ�������ֱ�ӱȴ�С Ҫ��strcmp e1>e2 return >0���� e1<e2 return <0���� e1=e2 return 0
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//void test3()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lesi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}


//����ð������ - �ص�����ʵ��
//void swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void* base, int sz, int width,int(*cmp(void*e1,void*e2)))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
//			{
//				//����
//				swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//
//
//int cmp_int(const void* e1, const void* e2)
//{
//	//�Ƚ���������ֵ
//	return *(int*)e1 - *(int*)e2;
//
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//name���ַ�������ֱ�ӱȴ�С Ҫ��strcmp e1>e2 return >0���� e1<e2 return <0���� e1=e2 return 0
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//void test4()
//{
//	 int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	 int sz = sizeof(arr) / sizeof(arr[0]);
//	 bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//}
//void test5() 
//{
//	struct stu s[3] = { {"zhangsan",20},{"lesi",30},{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s, sz, sizeof(s[0]), cmp_stu_by_name);
//}
//int main()
//{
//	//test();
//	//test2();
//	//test3();
//	//test4();
//	test5();
//	return 0;
//}



//int main()
//{
	//��������ʾ��������ֻ�������������������ʱ�򶼱�ʾ��Ԫ�ص�ַ
	//1.sizeof(��������
	//2.&������
	//int a[] = { 1,2,3,4 };
	//printf("%d\n", sizeof(a));//16
	//printf("%d\n", sizeof(a+0));//4��8 - ��������������ʾ��Ԫ�ص�ַ��a+0���Ǳ�ʾ��Ԫ�ص�ַ ����ַ�Ĵ�С��x32��Ϊ4 x64��Ϊ8
	//printf("%d\n", sizeof(*a));//4 ��������Ԫ�ؽ�����
	//printf("%d\n", sizeof(a+1));//4��8 - a+1�����ʾ�ڶ���Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(a[1]));//4 -�ڶ���Ԫ�ص�ַ
	//printf("%d\n", sizeof(&a));//4��8 -&aȷʵȡ����������ĵ�ַ��������Ȼ�Ǹ���ַ����ַ�Ĵ�С����4/8
	//printf("%d\n", sizeof(*&a));//16 -&aȡ�����������ַȻ������� �ȼ�����������Ĵ�С
	//printf("%d\n", sizeof(&a+1));//4��8 -&a+1����һ��������ȡ����ĵ�ַ��ʵ�ʾ��ǵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(&a[0]));//4��8 -ȡ��Ԫ�ص�ַ
	//printf("%d\n", sizeof(&a[0]+1));//4��8 -�ڶ���Ԫ�ص�ַ
	//
	//char arr[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr));//���ֵ -strlen�Ǽ����ַ������ȵ� ���Ĳ�����һ��ָ�� ��ָ��ָ��ĵ�ַ��ʼ������ֱ������\0
	//printf("%d\n", strlen(arr+0));//���ֵ ������ֱ�Ӵ�arr��˼һ��
	//printf("%d\n", strlen(*arr));//error -�����������ǵ�ַ ����
	//printf("%d\n", strlen(arr[1]));//error
	//printf("%d\n", strlen(&arr));//���ֵ
	//printf("%d\n", strlen(&arr+1));//�ǣ����ֵ-6�������ֵ
	//printf("%d\n", strlen(&arr[0]+1));//�ǣ����ֵ-1�������ֵ

	//printf("%d\n", sizeof(arr));//6 -sizeofֻ���������С��λ�ֽ�
	//printf("%d\n", sizeof(arr+0));//4��8 -�ǵ�ַ������
	//printf("%d\n", sizeof(*arr));//1 -����Ԫ�ص�ַ������
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4��8 -���ǵ�ַ��������
	//printf("%d\n", sizeof(&arr+1));//4��8 -���ǵ�ַ��������
	//printf("%d\n", sizeof(&arr[0]+1));//4��8 -�ڶ���Ԫ�صĵ�ַ

	//char arr[] = "abcdef";//���������ڳ�ʼ��ʱ����Ĭ��Ҫ����\0�� - abcdef\0
	//printf("%d\n", strlen(arr));//6
	//printf("%d\n", strlen(arr+0));//6
	//printf("%d\n", strlen(*arr));//error
	//printf("%d\n", strlen(arr[1]));//error
	//printf("%d\n", strlen(&arr));//6
	//printf("%d\n", strlen(&arr+1));//���ֵ
	//printf("%d\n", strlen(&arr[0]+1));//5

	//printf("%d\n", sizeof(arr));//7
	//printf("%d\n", sizeof(arr+0));//4��8 ��ַ������
	//printf("%d\n", sizeof(*arr));//1 ����Ԫ�ص�ַ�����õõ���Ԫ�� ��СΪ1
	//printf("%d\n", sizeof(arr[1]));//1
	//printf("%d\n", sizeof(&arr));//4��8 ��ַ!!!!
	//printf("%d\n", sizeof(&arr+1));//4��8 ��ַ������
	//printf("%d\n", sizeof(&arr[0]+1));//4��8  ��ַ����

	//char* p = "abcdef";//p��ָ���������ŵ������ַ���ַ
	//printf("%d\n", strlen(p));//6
	//printf("%d\n", strlen(p + 1));//5
	//printf("%d\n", strlen(*p));//error
	//printf("%d\n", strlen(p[0]));//error
	//printf("%d\n", strlen(&p));//���ֵ -p���������ַ������ַ���ַ �Ǹ���ַ ˭֪���ǵ�ַ�Ǹ�ɶ�����
	//printf("%d\n", strlen(&p+1));//���ֵ
	//printf("%d\n", strlen(&p[0] + 1));//5
	//printf("%d\n", sizeof(p));//4��8
	//printf("%d\n", sizeof(p+1));//4��8 -�ڶ����ַ�b�ĵ�ַ
	//printf("%d\n", sizeof(*p));//1 -��p�����õõ������ַ�a
	//printf("%d\n", sizeof(p[0]));//1 -int arr[10];arr[0]==*(arr+0) p[0]==*(p+0)==a ����ȫ����������ķ�ʽ����
	//printf("%d\n", sizeof(&p));//4��8
	//printf("%d\n", sizeof(&p+1));//4��8
	//printf("%d\n", sizeof(&p[0]+1));//4��8 -ȡ������b�ĵ�ַ

	//int a[3][4] = { 0 };//��ά������Ԫ�ؾ��ǵ�һ������
	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16 -����a[0]��ʾ��һ������������� sizeof(������)��ʾ�������� ����sizeof(a[0])��ʾ��һ�е������С��������ָ��
	//printf("%d\n", sizeof(a[0]+1));//4��8 -��һ�еڶ�������Ĵ�С a[0]���ǵ�������sizeof�е����Ա�ʾ������Ԫ�ص�ַ a[0]+1���ǵڶ���Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(*(a[0]+1)));//4 -��һ�еڶ���Ԫ��
	//printf("%d\n", sizeof(a+1));//4��8 -�ڶ�������ĵ�ַ ��Ϊ��ά�������Ԫ�ص�ַ�ǵ�һ������ĵ�ַ ��ά�������Ԫ�ؾ��ǵ�һ������
	//printf("%d\n", sizeof(*(a+1)));//16 -�ڶ��������С
	//printf("%d\n", sizeof(&a[0]+1));//4��8 -�ڶ��е�ַ
	//printf("%d\n", sizeof(*(&a[0]+1)));//16
	//printf("%d\n", sizeof(*a));//16 -����Ԫ�ص�ַ������ ��ά������Ԫ�ص�ַ���ǵ�һ�������ַ �����þ��ǵ�һ������
	//printf("%d\n", sizeof(a[3]));//16 -��Ȼ�����в������� ��������Ϊa������Ȼ��int��ÿ��4��Ԫ�ص����� ���Ի���16

	
//	return 0;
//}


//int main()
//{
//	int a[5] = { 1,2,3,4,5 };
//	int *ptr = (int*)(&a + 1);//&a a��ʾ��������&a+1��ʾ������������ָ������ĩԪ�أ�5������
//	printf("%d,%d\n", *(a + 1), *(ptr - 1));// 2 5 //ptr-1����ָ����ǰ�ƶ�һ��int��С Ҳ��ָ����5
//	return 0;
//}

//struct Test
//{
//	int num;
//	char* pcname;
//	short sdate;
//	char cha[2];
//	short sba[4];
//}*p;
////����p��ֵΪ0x100000, �ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//	p =(struct Test*) 0x100000;
//	//ָ��p����ʲô���� ��p+1�ͱ�ʾ��ָ�����ʹ�С��+1
//	printf("%p\n", p + 0x1);
//	printf("%p\n", (unsigned long)p + 0x1);
//	printf("%p\n", (unsigned int*)p + 0x1);
//}


//�ַ�������
//void reverse(char* str)
//{
//	int len = strlen(str);
//	char* left = str;
//	char* right = str+len-1;
//	while (left < right)
//	{
//		char tmp =* left;
//		*left =* right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[20] = { 0 };
//	scanf("%s", &arr);
//	reverse(arr);
//	printf("%s", arr);
//	return 0;
//}


//��2+22+222+2222+22222�ĺ�
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int ret = 0;
//	scanf("%d%d",&a,&n );
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;//ȡ��a aa aaa aaaa
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//��0-100000�е�ˮ�ɻ���������:1^3+2^3+3^3=123��
//#include<math.h>
//int main()
//{
//	int i = 0;
//	
//	
//	for (i = 0; i < 100000; i++)
//	{
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		//1.�����i��nλ��
//		while (tmp/= 10)
//		{
//			n++;
//			
//		}
//		//2.����ÿһλ����n�η�֮��
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum + pow(tmp % 10, n);
//			tmp = tmp / 10;
//		}
//		//3.�Ƚ���ԭ��i�Ƿ���ͬ
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	
//	
//	return 0;
//}


//��ӡ����
//int main()
//{
//	//�����ηֳ��������� �ϰ�line���°�line-1��
//	
//	//�ϰ벿��
//	int i = 0;
//	int line = 0;
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		//��ӡ�ո� 
//		int j = 0;
//		for (j = 0; j < line-1-i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < i*2+1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//�°벿��
//	for (i = 0; i <line-1 ; i++)
//	{
//		int j = 0;
//		//����ո�
//		for (j = 0; j <=i ; j++)
//		{
//			printf(" ");
//		}
//		//���*
//		for (j = 0; j < 2*(line-1-i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��20��Ǯ��һƿ��ˮһ��Ǯ��ÿ������ƿ���Ի�һƿ��ˮ һ�����Ժȶ���ƿ  memony-Ǯ  empty-��ƿ  total-���˶���ƿ
//int main()
//{
//	int memony = 0;
//	scanf("%d", &memony);
//	int total = memony;
//	int empty = memony;
//	while (empty >= 2)
//	{
//		total = total + empty / 2;
//		empty = empty / 2 + empty % 2;
//		
//	}
//	
//	printf("%d", total);
//	return 0;
//}



//��һ�������е�������ǰ��ż���ź���
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		//�ҵ���ߵ�ż��
		while ((arr[left] % 2 == 1) && (left < right))
		{
			left++;
		}
		//�ҵ��ұߵ�����
		while ((arr[right] % 2 == 0) && (left < right))
		{
			right--;
		}
		//���� - ��ż���ŵ����������ŵ�����
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	
	return 0;
}
