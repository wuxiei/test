#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<errno.h>
#include<stdlib.h>
//�����ڴ��ص����ַ�������
//int main()
//{
//	int arr[10] = { 1,2,3,4,5 ,6,7,8,9,10};
//	memmove(arr+2,arr,20);
//	return 0;
//}

//my_memmove��ʵ��
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	assert(dest);
//	assert(src);
//	void* ret = dest;
//	if (dest < src)
//	{
//		//ǰ->��
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
//		//��->ǰ
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src + count);//����ַ����ƶ�������λ���ֽ����Լ�count�����ҵ����һ���ֽ�
//			//Ȼ��count-- �Ϳ���ʵ�ִӺ���ǰ�ƶ�
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

//memcmp - �ַ����Ƚ�
//int main()
//{
//	//01 00 00 00 02 00 00 00 03 00 00 00....
//	//01 00 00 00 02 00 00 00 05 00 00 00....
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret = memcmp(arr1, arr2, 9);//memcmp�ǰ��ֽڿ�����
//	printf("%d\n", ret); 
//	return 0;
//}


//memset - �ڴ����� - ��arr��ָ���ֽڳ��ȵ��ڴ����ó�ָ��������
//int main()
//{
//	char arr[20] = "";
//	memset(arr, '#', 10);//�ڴ����õ�λ���ֽ�
//	return 0;
//}


//�ṹ������
//struct Stu
//{
//	char name[20];
//	char tele[12];
//	char sex[10];
//	int age;
//}s4,s5,s6;//ȫ�ֱ���
//
//struct Stu s3;//ȫ�ֱ���
//
//int main()
//{
//	struct Stu s1;//�ֲ�����
//	struct Stu s2;//�ֲ�����
//	struct Stu s7 = { "����","1233445","��",14};
//	printf("%s %s %s %d\n", s7.name, s7.tele, s7.sex, s7.age);
//	return 0;
//}

//��ȷ�������÷��� - ���������ݽṹ����Ĳ���
//struct Node
//{
//	int data;
//	struct Node* next;//ָ��ķ�����=ȥ������
//};


//struct T
//{
//	double w;
//	int age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct S s = { 'c',{3.14,30},6,7.7,"hello.." };
//	printf("%c %If %d %d %If %s\n", s.c, s.st.w, s.st.age, s.a, s.d, s.arr);
//	return 0;
//}

//�ṹ����ռ�ڴ��С������� - �ṹ���ڴ����
//1.�ṹ���һ����Ա�����ĵ�ַ���ǽṹ����ʼ��ַ
//2.�����Ա�����������Ҷ����� - �������ʹ�С��Ĭ�϶������еĽ�Сֵ��vs��Ĭ�϶�����Ϊ8��Ȼ���Ҷ������������ĵ�ַ�Ž�ȥ
//3.�����ṹ���СΪ���������������������������ǿ�ƫ���� - ��һ����Ա�ڴ��ַƫ����Ϊ0 �ڶ���Ϊ1.....��

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//struct S2
//{
//	char c1;
//	char c2;
//	int a;
//};
//int main()
//{
//	struct S1 s1 = { 0 };
//	printf("%d\n", sizeof(s1));//12
//	struct S2 s2 = { 0 };
//	printf("%d\n", sizeof(s2));//8
//	return 0;
//}

//Ĭ�϶��������Ը���
#pragma pack(4)//��Ĭ�϶�������Ϊ4
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->c = 'w';
//	ps->i = 100;
//	ps->d = 3.14;
//}
////��ֵ���� - �����޸Ľṹ��������ռ�ÿռ��
//void print1(struct S tmp)
//{
//	printf("%c %d %IF\n", tmp.c, tmp.i, tmp.d);
//}
////��ַ���� - �����޸Ľṹ��������ռ�ÿռ�С
////������ṹ�屻�޸Ŀ���д�ɣ�void print2(const struct S* tmp)
//void print2(struct S* tmp)
//{
//	tmp->c = 'h';
//	printf("%c %d %IF\n", tmp->c, tmp->i, tmp->d);
//}
//int main()
//{
//	struct S s = { 0 };
//	Init(&s);//��ʼ��s
//	printf("%d\n", s.i);
//	print1(s);
//	print2(&s);//�����Ƽ���ַ����
//	return 0;
//}


//struct T
//{
//	double w;
//	int age;
//};
//struct S
//{
//	char c;
//	struct T st;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct S s = { 'c',{3.14,30},6,7.7,"hello.." };
//	printf("%c %If %d %d %If %s\n", s.c, s.st.w, s.st.age, s.a, s.d, s.arr);
//	printf("%d\n", sizeof(s));//48
//	return 0;
//}
//������ - ���ڽṹ������Ĵ洢��ʽ ��������ƽṹ��ʱҪ��ռ�ÿռ�С�ĳ�Ա����������һ��


//λ�� - ������λ
//1.ð�ź�������ֱ�ʾ������������ֻȡ��������λ - ��ʡ�ռ�
//2.�ڵ�ǰ�������д���->�󿪱ٿռ�
//3.�洢Ҳ�ǽ���ֵ���ɶ����ƴ��ҵ���洢
//4.����������Ķ�����λ>λ���� - ����ҵ����ȡλ����������λ�洢
//5.����������Ķ�����λ<λ���� - ���ڸö����������油0
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%d", sizeof(s));//8
//	return 0;
//}


//ö������ - ö�����³�Ա������ֵ���޶���������Ǵ�0��ʼ˳��+1�� ���ڶ���ö�ٳ���ʱ���Ը���ֵ����������֮���ܸı�
//enum Sex
//{
//	MALF,//0
//	FEMALE,//1
//	SECRT//2
//};
//
//enum A
//{
//	//��������ֵ�ǿ��Ե�
//	z = 3,//3
//	x=5//5
//};
//int main()
//{
//	enum Sex s = MALF;
//	printf("%d\n", s);//0
//	printf("%d %d", z, x);//3 5
//	return 0;
//}


//������ - ������ 
//1.��������ǳ�Ա���Ϲ���ͬһ���ڴ�ռ�
//2.�������Ա����ͬʱʹ�ã���һ�Ķ���
//3.���ϱ����Ĵ�С����������Ա�Ĵ�Сand������Ա��С��������������������ʱ��Ҫ���뵽���������ĵ�������
//union un
//{
//	char c;//��С1 Ĭ�϶�����4 ������1
//	int i;//��С4 Ĭ�϶�����4 ������4
//	//���Ա����4 ����������4 ��������������ϵ�������ϳ�Ա������СΪ4
//};
//int main()
//{
//	union un u;
//	printf("%d\n", sizeof(u));//4
//	return 0;
//}



//��С���ж�
//int main()
//{
//	int a = 1;//���00 00 00 01  С��01 00 00 00
//	if(1 == *(char*)&a)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���");
//	}
//}


//�����������С��
//int check_sys()
//{
//	union un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//	if (1 == ret)
//	{
//		printf("С��");
//	}
//	else
//	{
//		printf("���");
//	}
//	return 0;
//}



//��̬�ڴ濪��
//1.���ٳɹ�������һ��ָ�򿪱ٺõĿռ��ָ��
//2.����ʧ�ܣ�����һ����ָ��
//3.mallocĬ�Ϸ���������void* �ڶ��ڴ���ʵ�ʹ�ù����в����㣬������ʹ��ʱ�����Լ�ֻ��ָ������
//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p=(int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//�ڴ濪��ʧ�ܷ��ش�����ʾ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//������ʹ��
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//		
//	}
//	free(p);//����̬�����ڴ治��ʹ��ʱ��Ӧ�ý��ڴ滹������ϵͳ
//	p = NULL;//free�ͷ�ָ����ָ���ڴ����Ȼ���������ʵ��ǿ�ռ䣬����Ϊ�˼��ٲ���Ҫ���鷳Ҫ�ÿ�
//	return 0;
//}



//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p = (int*)malloc(INT_MAX);//int�͵����ֵ
//	if (p == NULL)
//	{
//		//�ڴ濪��ʧ�ܷ��ش�����ʾ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//������ʹ��
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//
//	}
//	return 0;
//}



//calloc��̬�ڴ濪�� - ��malloc������1.����д����ͬ 2.�Զ����ڴ��ʼ��Ϊ0
//int main()
//{
//	int* p=calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p+i));
//		}
//  free(p);
//  p=NULL;
//	}
//	return 0;
//}


//int main()
//{
//	int* p = calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//			printf("%d ", *(p + i));
//		}
//	}
//	//�����������ǿռ䲻�����ˣ���Ҫ��չ�ռ�
//	//��չ��40���ֽ� - �����õ�realloc������������̬�ڴ�ռ�Ĵ�С
//	int* ptr = realloc(p, 40);
//	//����Ҫע��realloc�ڸ����ڴ��Сʱ�������������
//	//1.ԭ�ռ�������㹻�Ŀռ����׷�ӣ�realloc��ֱ���������׷�ӿռ䣬������ԭָ��
//	//2.ԭ�ռ����û���㹻�Ŀռ����׷�ӣ�realloc��ֱ������һ���ط����¿���һ���㹻��Ŀռ䣬��ԭ��ַ���ݸ��ƹ�ȥ�����ͷ�ԭ�ռ�
//	//3.Ҫ׷�ӵĿռ�̫���޷����٣��᷵��һ����ָ�롣��ʱ���ֱ����ԭָ����շ���ֵ���򲻽��ռ���չʧ�ܣ����Ὣԭ��ַ��ʧ
//	//4.��������������Ĵ��ڣ�Ϊ�˲���Ҫ���鷳������Ҫ�жϷ���ָ���Ƿ�Ϊ�գ��粻Ϊ�վ��ǿ��ٳɹ������ǽ������ַ��ֵ��ԭָ��
//	if (ptr != NULL)
//	{
//		//�������ٳɹ�
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 30; i++)
//		{
//			*(p + i) = 7;
//			printf("%d ", *(p + i));
//		}
//	}
//	return 0;
//}

//int main()
//	{
//
//		int* p = realloc(NULL, 40);//ʵ�ֵĺ�mallocͬ����Ч����Ҳ����realloc��һ����ָ��ͺ�mallocһ��
//		return 0;
//	}
//



//��̬�ڴ濪�ٵĳ���6�Ӵ���


int main()
{


	//1.�Կ�ָ������ò���
	int* p = malloc(40);
	*p = 10;//�����Ǻ�Σ�յģ����malloc���ٿռ�ʧ�ܻ᷵��һ����ָ�룬����ָ�븳��p��������ֵerror


	//2.��̬�����ڴ��Խ�����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//int i = 0;
	////!!!!Խ����ʣ�����error
	//for (i = 0; i <= 10; i++)
	//{
	//	*(p + i) = i;
	//}
	//free(p);
	//p = NULL;


	//3.�ԷǶ�̬���ٵ��ڴ�free
	//int a = 10;
	//int* p = &a;
	////p���Ƕ�̬���ٵ��ڴ棬����free
	//free(p);
	//p = NULL;



	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	int i = 0;
	//	for (i = 0; i < 10; i++)
	//	{
	//		*p++;//!!!error - ����p++ѭ�������ͻ�ָ�������ڴ�ռ����󣬾��Ҳ���p�ĳ�ʼ��ַ�� free��ʱ��ͻ�free��̬�����ڴ�ĺ�����ڴ� �Ƿ�����
	//	}
	//}
	//free(p);
	//p = NULL;


	//5.��ͬһ�鶯̬�ڴ�Ķ���ظ��ͷ�
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	//else
	//{
	//	//����ʹ��
	//}
	//free(p);
	////......
	//free(p);//�ظ��ͷ�error�������������ÿһ��free֮�󶼽������ÿ� - p=NULL;�������ظ�free�ͷ�һ����ָ������ǲ���Ϊ���ѣ��������
	

	//6.��̬�����ڴ������ͷ�(û��free) - �ڴ�й¶
	return 0;
}
