#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
//�ļ�����

//1.�ļ���������Ҫ���ļ�  �������Ҫ�ر��ļ��ͷ�ָ�� ��Щ���費����
int main()
{

	//д�ļ�
//	FILE* pf = fopen("text.txt", "w");//·�����򿪷�ʽ
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//��ʧ�ܣ����ش�����
//	}
//	//д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;


	//���ļ�
//FILE* pf = fopen("text.txt", "r");//�򿪷�ʽ����
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//��ʧ��
//		return 0;
//	}
//	//���ļ� - �ļ��Ķ�ȡ��һ���ַ�һ���ַ���ȡ��
//	int ch = fgetc(pf);//�ñ���ch���մ�pf�ж���������
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;



	//fgets�������������ж�ȡ����
	//fgetsһ��ֻ��ȡһ������ ���һ��ȡ�ļ��еĻس�������\n���У�������ļ���ĩβ��û�лس�����fgets��ȡ���ỻ��
	//char buf[1024] = { 0 };//���������Ŷ���������
	//FILE* pf = fopen("text.txt", "r");
	//	if (pf == NULL)
	//	{
	//		printf("%d\n", strerror(errno));
	//		return 0;
	//	}
	//	//���ļ�
	//	fgets(buf, 1024, pf);//��pf�ж�ȡ1024���ֽڴ�ŵ�buf��
	//	printf("%s", buf);
	//	fgets(buf, 1024, pf);
	//	printf("%s", buf);
	//	
	//	//�ر��ļ�
	//	fclose(pf);
	//	pf = NULL;


	//fputsд��һ������ ������Ҫд�����������Ϊstring��  Ҫд��ĵ�ַ
	//fputs���ỻ�У�Ҫ��д��ʱ��\nʵ�ֻ���
	//char buf[1024] = { 0 };
	//FILE*pf = fopen("text.txt", "w");
	//if (pf == NULL)
	//{
	//	return 0;
	//}
	////д���ļ�
	//fputs("hello ll\n", pf);
	//fputs("kdhcnvks", pf);

	////�ر��ļ�
	//fclose(pf);
	//pf = NULL;



	//�Ӽ����϶�ȡһ����Ϣ
	char buf[1024] = { 0 };
	/*fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
	fputs(buf, stdout);//�������׼�����*/
	//�ȼ��������д��
	gets(buf);
	puts(buf);

	return 0;
}