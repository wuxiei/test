#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
//�ļ�����

//1.�ļ���������Ҫ���ļ�  �������Ҫ�ر��ļ��ͷ�ָ�� ��Щ���費����
//int main()
//{

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
//	char buf[1024] = { 0 };
//	/*fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ
//	fputs(buf, stdout);//�������׼�����*/
//	//�ȼ��������д��
//	gets(buf);
//	puts(buf);
//
//	return 0;
//}


	//struct S
	//{
	//	int n;
	//	float score;
	//	char arr[10];
	//};

	//int main()
	//{
	//	struct S s ={100,3.14f,"abcdef"};
	//	struct S tmp = { 0 };
	//	char buf[1024] = { 0 };
	//	//�Ѹ�ʽ��������ת�����ַ������浽buf
	//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	//	printf("%s\n", buf);
	//	//��buf�ж�ȡ��ʽ�������ݵ�tmp��
	//	sscanf(buf, "%d %f %s\n", &(tmp.n), &(tmp.score), tmp.arr);
	//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
	//	return 0;
	//}

struct S
{
	char name[20];
	int age;
	double score;
};
//int main()
//{
//	struct S s = { "����",20,55.6 };
//	FILE* pf = fopen("text.tex", "wb");
//	if (pf == NULL)
//	{
//		return;
//	}
//	//��������ʽд�ļ�
//	fwrite(&s, sizeof(struct S), 1, pf);//Ҫд����ļ��������Ҫд���Ԫ�ض���ֽڣ�����Ԫ�أ�д�뵽����
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	struct S tmp = { 0 };
//	FILE* pf = fopen("text.tex", "rb");
//	if (pf == NULL)
//	{
//		return;
//	}
//	//��������ʽ��ȡ�ļ�
//	fread(&tmp, sizeof(struct S), 1, pf);//���������ݷ����Ҫ����Ԫ�ض���ֽڣ�����Ԫ�أ��������
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//	


//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, 4, SEEK_CUR);//SEEK_CUR�ļ�ָ��ĵ�ǰλ�� ���ƫ��4���ֽ�
//	//2.��ȡ�ļ�
//	int ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//int main()
//{
//	FILE* pf = fopen("text.txt", "r");
//	if (pf == NULL)
//	{
//		return;
//	}
//	//1.��λ�ļ�ָ��
//	fseek(pf, -2, SEEK_END);//SEEK_END�ļ���ĩβλ�� ��ǰƫ��2���ֽ� ע�����ƫ��λ���Ǹ�����������
//	//2.��ȡ�ļ�
//	//int ch = fgetc(pf);
//
//	int pos = ftell(pf);//ftell(pf)��ȡ�ļ���дָ��ĵ�ǰλ��
//	printf("%d\n", pos);
//
//	void rewind(pf);//rewind���ļ�ָ��λ�ûص��ļ���ʼλ��
//
//	pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}