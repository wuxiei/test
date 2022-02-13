#include<stdio.h>
//int main()
//{
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char*)&a;
//	//假设再32位大端处理器则上b的值为？
//	printf("%d\n", b);//大端模式下存储a：00 00 12 34 强制类型转化成unsigned char型再解引用后只能访问1个字节既 - 0
//	return 0;
//}

//int main()
//{
//	char a[1000] = { 0 };//char类型的取值范围-128—>127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3.....-128 127 126....3 2 1 0 strlen遇到0就结束
//	printf("%d\n", strlen(a));//255
//	return 0;
//}



//打印左对齐的杨辉三角-上面两个数相加等于下面的数
// 正常的杨辉三角
//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
// 左对齐的杨辉三角
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
//	//打印
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


//找出凶手
//a说：不是我    b说；是c
//c说；是d       d说；c在胡说
//已知有三个人说的真话，一个人 说的假话，找出凶手
int main()
{
	char killer = 0;
	for (killer = 'a'; killer < 'd'; killer++)
	{
		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
		{
			printf("killer是；%c\n", killer);
		}
	}
	return 0;
}