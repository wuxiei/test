#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//��̬���鿪

//���嶯̬����ṹ������ά�����ٵ�����
struct dynamicArray
{
	void** pAddr;//ά���ڶ�����ʵ�����ָ��
	int m_capacity;//��������
	int m_size;//�����С
};

//��ʼ����̬����ṹ��
struct dynamicArray* init_DynamicArray(int capacity)//����ֻ��ʼ����̬����ṹ���е����������
{
	if (capacity <= 0)
	{
		return NULL;//�������С�ڵ���0���򷵻ؿ�
	}
	struct dynamicArray * array=(struct dynamicArray *)malloc(sizeof(struct dynamicArray));
	//������Ϊ�գ�mallocһ���СΪ��̬����ṹ���С���ֽڵĿռ䣬���ö�̬���ݽṹ�����͵�ָ��array����������ַ

	//malloc��֮����������Ҫ�ж��ڴ濪���Ƿ�ɹ�
	if (NULL == array)
	{
		return NULL;//�ڴ濪��ʧ��
	}
	//���ٳɹ�
	//��������
	array->m_capacity = capacity;//��malloc�������ռ���������
	//���������С
	array->m_size = 0;
	//ά����ʵ�����ָ��ָ����ʵ����
	array->pAddr =(void**) malloc(sizeof(void*) * array->m_capacity);
	//��ά����ʵ�����ָ��arrayָ������malloc������ʵ����
	return array;
}

//���빦��
void insert_dynamicArray(struct dynamicArray* array, int pos, void* data)
{
	
	if (NULL == array)
	{
		return;//��Ч��ָ��
	}
	if (NULL == data)
	{
		return;//��Ч������
	}
	if (pos<0 || pos>array->m_size)//Ҫ�����λ��С��0���ߴ�����ʵ�����Ա��С����Ϊ��Чλ�� - β��
	{
		//��Ч��λ�� ��β��
		pos = array->m_size;
	}
	

	//��������ʼ����ʱҪ���ж��Ƿ����أ�������أ���̬����һ������ڴ�
	if (array->m_size >= array->m_capacity)
	{
		//1.����һ�����Ŀռ�
		int newCapacity = array->m_capacity * 2;//������أ����Ǵ��¿���һ���СΪԭ����2���Ŀռ���Ϊ�µ�����

		//2.�����¿ռ�
		void** newSpace = (void**)malloc(sizeof(void*) * newCapacity);

		//3.��ԭ�����ݿ�������
		memcpy((void*)newSpace, array->pAddr, sizeof(void*) * array->m_capacity);

		//4.�ͷ�ԭ�пռ�
		free(array->pAddr);

		//5.����ָ��ָ��
		array->pAddr = newSpace;

		//6.����������С
		array->m_capacity = newCapacity;
	}
	//����������Ԫ�� - ��Ҫ������Ԫ�ش����һ��λ�����κ���
	int i = 0;
	for (i = array->m_size-1; i >= pos; i--)//pos������������ȫ���ɺ������ƶ�һλ
	{
		array->pAddr[i+1 ] = array->pAddr[i];
	}
	//������Ԫ��
	array->pAddr[pos] = data;

	//���´�С
	array->m_size++;
}

//��������
void foreach_dynamicArray(struct dynamicArray* array, void(*myForeach)(void*))// void(*myForeach)(void*)�ص����� - ��Ϊ�����е�����Ϊvoid�Ͳ���ֱ�������Ҫ�ûص�����
{
	if (NULL == array)
	{
		return;//Ҫ��������Ϊ��
	}
	int i = 0;
	for (i = 0; i < array->m_size; i++)
	{
		myForeach(array->pAddr[i]);
	}
}

//����Ҫ�����Ľṹ��
struct person
{
	char name[20];
	int age;
};

void myprintPerson(void* data)//�ص����� - data��void���͵����ݣ��޷�ֱ�������Ҫ���ûص�����
{
	struct person* P = (struct person*)data;
	printf("������%s����%d\n", P->name,P->age);
}
void test01()
{
	//������̬����
	struct dynamicArray* arr = init_DynamicArray(5);

	//׼��6��person����
	struct person p1 = {"��ɪ",18};
	struct person p2 = {"�Ѿ�",28};
	struct person p3 = {"����",38};
	struct person p4 = {"�ŷ�",19};
	struct person p5 = {"����",20};
	struct person p6 = {"����",17};

	printf("��ǰ������%d\n", arr->m_capacity);
	//�����ݲ��뵽��̬������
	insert_dynamicArray(arr, 0, &p1);
	insert_dynamicArray(arr, 0, &p2);
	insert_dynamicArray(arr, 0, &p3);
	insert_dynamicArray(arr, 2, &p4);
	insert_dynamicArray(arr, 10, &p5);
	insert_dynamicArray(arr, 1, &p6);
	
	//������̬����
	foreach_dynamicArray(arr, myprintPerson);

	printf("�����������%d", arr->m_capacity);
}
int main()
{

	test01();
	system("pause");
	return EXIT_SUCCESS;
}