#include<stdio.h>
#include<string.h>
#include<assert.h>

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
struct S
{
	char c;
	int i;
	double d;
};
void Init(struct S* ps)
{
	ps->c = 'w';
	ps->i = 100;
	ps->d = 3.14;
}
//��ֵ���� - �����޸Ľṹ��������ռ�ÿռ��
void print1(struct S tmp)
{
	printf("%c %d %IF\n", tmp.c, tmp.i, tmp.d);
}
//��ַ���� - �����޸Ľṹ��������ռ�ÿռ�С
//������ṹ�屻�޸Ŀ���д�ɣ�void print2(const struct S* tmp)
void print2(struct S* tmp)
{
	tmp->c = 'h';
	printf("%c %d %IF\n", tmp->c, tmp->i, tmp->d);
}
int main()
{
	struct S s = { 0 };
	Init(&s);//��ʼ��s
	printf("%d\n", s.i);
	print1(s);
	print2(&s);//�����Ƽ���ַ����
	return 0;
}
