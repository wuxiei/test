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

}
