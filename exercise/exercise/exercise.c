#include<stdio.h>
//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	//������32λ��˴���������b��ֵΪ��
//	printf("%d\n", b);//���ģʽ�´洢a��00 00 12 34 ǿ������ת����unsigned char���ٽ����ú�ֻ�ܷ���1���ֽڼ� - 0
//	return 0;
//}

//int main()
//{
//	char a[1000] = { 0 };//char���͵�ȡֵ��Χ-128��>127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3.....-128 127 126....3 2 1 0 strlen����0�ͽ���
//	printf("%d\n", strlen(a));//255
//	return 0;
//}



//��ӡ�������������-������������ӵ����������
// �������������
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
// �������������
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//.............
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if (j == i)
//			{
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//��ӡ
//	for (i = 0; i < 10; i++)
//		
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//�ҳ�����
//a˵��������    b˵����c
//c˵����d       d˵��c�ں�˵
//��֪��������˵���滰��һ���� ˵�ļٻ����ҳ�����
int main()
{
	char killer = 0;
	for (killer = 'a'; killer < 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
		{
			printf("killer�ǣ�%c\n", killer);
		}
	}
	return 0;
}