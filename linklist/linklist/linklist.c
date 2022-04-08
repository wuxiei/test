#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//����������ṹ��
struct LinkNode
{
	void* data;//������
	struct LinkNode* next;//ָ����
};

//����ṹ��
struct LList
{
	struct LinkNode pHeader;//ͷ���
	int m_Size;//������
};

typedef void* LinkList;//Ϊ�˲����û��õ�����������Ϲ�ģ�����������һ��void*�͵�������û���
//��ʼ������
LinkList init_LinkList()//���û��õ��������ʼ��
{
	struct LList* myList = malloc(sizeof(struct LList));
	if (myList == NULL)
	{
		return NULL;
	}

	//��ʼ������ṹ��
	myList->pHeader.data = NULL;
	myList->pHeader.next = NULL;
	myList->m_Size = 0;

	return myList;
}

//������
void insert_LinkList(LinkList list, int pos, void* data)
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	struct LList* myList = list;//�Ѳ��ܲ�����LinkLis��ԭ�ɿ��Բ�����list
	if (pos<0 || pos>myList->m_Size)
	{
		//��Ч��λ�ã�β��
		pos = myList->m_Size;
	}
	
	//��Ч����
	//������ʱ���
	struct LinkNode* pCurrent = &myList->pHeader;//������ʱ�ڵ�������ͷ���
	for(int i=0;i<pos;i++)
	{
		pCurrent = pCurrent->next;//ͨ��ѭ���ҵ�Ҫ����λ�õ�ǰ���ڵ�
	};

	//�������½��
	struct LinkNode* newNode = malloc(sizeof(struct LinkNode));
	newNode->data = data;
	newNode->next = NULL;
	//���½ڵ���뵽������
	newNode->next = pCurrent->next;
	pCurrent->next = newNode;
	//����������
	myList->m_Size++;
}

//��������
void foreach_LinkList(LinkList list, void(*mypirnt)(void*))//��������Ļص�����
{
	if (list == NULL)
	{
		return;
	}
	struct LList* myList = list;//��list��Ϊ�ɲ���

	struct LinkNode* pCurrent = myList->pHeader.next;//�ҵ���һ�������ݵĽ��
	for (int i = 0; i < myList->m_Size; i++)
	{
		mypirnt(pCurrent->data);
		pCurrent = pCurrent->next;//����
	}
}

//ɾ������ - ��λ��
void removeByPos_LinkList(LinkList list, int pos)
{
	if (list == NULL)
	{
		return;
	}
	struct LList* myList = list;//��ԭ�ɿ���
	if (pos<0 || pos>myList->m_Size - 1)
	{
		//��Ч��λ��
		return;
	}
	//�ҵ���ɾ������ǰ���ڵ�
	struct LinkNode* pCurrent = &myList->pHeader;//������ʱ�ڵ㱣��ͷ���
	for (int i = 0; i < pos; i++)
	{
		pCurrent = pCurrent->next;//ѭ���ҵ���ɾ������ǰ��
	}

	//������ ��ɾ�����
	struct LinkNode* pDel = pCurrent->next;//���������ҵ��˴�ɾ������ǰ�����pCurrent��ô����next���Ǵ�ɾ����㣬���Ǹ�������pDel
	//��ʼɾ�� - ʹǰ������nextֱ��ָ���ɾ���ڵ��next
	pCurrent->next = pDel->next;
	//�ͷŴ�ɾ�����
	free(pDel);
	pDel = NULL;

	//����������
	myList->m_Size--;
}


//ɾ������ - ��ֵ
void removeByValue_LinkList(LinkList list, void* data, int(*myCompare)(void*, void*))//���ڱȽ����������Ƿ���ͬ�Ļص�����
{
	if (list == NULL)
	{
		return;
	}
	if (data == NULL)
	{
		return;
	}
	struct LList* myList = list;//��ԭ�ɿɲ���
	
	//������������ָ����� - ��Ϊ��ֵɾ���Ļ����ַ����Ա�ֻ���ҵ���ɾ���ݣ��Ҳ���ǰ��
	//���Դ�������ָ��һ��ָ���ɾ�����ݣ�һ��ָ������ǰ��������ָ��һ��
	struct LinkNode* pPrev = &myList->pHeader;//���ͷ���
	struct LinkNode* pCurret = pPrev->next;
	for (int i = 0; i < myList->m_Size; i++)
	{
		if (myCompare(pCurret->data, data))
		{
			//��ʼɾ��
			pPrev->next = pCurret->next;
			//�ͷŴ�ɾ�����
			free(pCurret);
			pCurret = NULL;
			//������С
			myList->m_Size--;

			break;//ɾ����������
		}
		//���ȫ��������һ�飬û�ҵ���ɾ�����ݣ�����������ָ��ȥ��ߴ���ȥ����������Ϲɾ����
		pPrev = pCurret;
		pCurret = pCurret->next;
	}
}

//�������
void clear_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return;
	}
	struct LList* myList = list;

	struct LinkNode* pCurrent = myList->pHeader.next;//�ҵ���һ�������ݵĽ��
	for (int i = 0; i < myList->m_Size; i++)
	{
		//�ȼ�ס��ɾ���ڵ�ĺ�̽��
		struct LinkNode* pNext = pCurrent->next;
		free(pCurrent);
		pCurrent = pNext;
	}
	myList->pHeader.next = NULL;
	myList->m_Size = 0;
}


//����������
int size_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return -1;
	}
	struct LList* myList = list;
	return myList->m_Size;
}


//��������
void destroy_LinkList(LinkList list)
{
	if (list == NULL)
	{
		return;
	}
	clear_LinkList(list);
	free(list);
	list = NULL;
}
//����person�ṹ��
struct person
{
	char name[64];
	int age;
};

//�������ݶԱȵĻص�����
int myCompare(void* data1, void* data2)
{
	struct person* p1 = data1;
	struct person* p2 = data2;

	return strcmp(p1->name, p2->name) == 0 && p1->age == p2->age;
}
//��������Ļص�����
void myPrintPerson(void* data)
{
	struct person* p = data;
	printf("������ %s ���䣺 %d\n", p->name, p->age);
}
void test01()
{
	//��ʼ������
	LinkList list = init_LinkList();
	//��������
	struct person p1 = { "����",18 };
	struct person p2 = { "�Ѿ�",28 };
	struct person p3 = { "����",38 };
	struct person p4 = { "�ŷ�",19 };
	struct person p5 = { "����",20 };
	struct person p6 = { "����",17 };

	//��������
	insert_LinkList(list, 0, &p1);
	insert_LinkList(list, 0, &p2);
	insert_LinkList(list, 1, &p3);
	insert_LinkList(list, 0, &p4);
	insert_LinkList(list, 1, &p5);
	insert_LinkList(list, 100, &p6);

	//��������
	printf("��ǰ������Ϊ��%d\n", size_LinkList(list));
	foreach_LinkList(list, myPrintPerson);
	//�ŷ� ���� �Ѿ� ���� ���� ����
	
	//ɾ������
	removeByPos_LinkList(list, 3);
	printf("------------------------------\n");
	printf("��ǰ������Ϊ��%d\n", size_LinkList(list));
	foreach_LinkList(list, myPrintPerson);

	//ɾ������
	struct person p = { "����",20 };
	removeByValue_LinkList(list, &p, myCompare);
	printf("------------------------------\n");
	printf("��ǰ������Ϊ��%d\n", size_LinkList(list));
	foreach_LinkList(list, myPrintPerson);
	
	//�������
	clear_LinkList(list);
	printf("------------------------------\n");
	printf("��ǰ������Ϊ��%d\n", size_LinkList(list));
	foreach_LinkList(list, myPrintPerson);
	
	//
}



int main()
{

	test01();
	return 0;
}