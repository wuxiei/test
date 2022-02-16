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
//int main()
//{
//	char killer = 0;
//	for (killer = 'a'; killer < 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd')==3)
//		{
//			printf("killer是；%c\n", killer);
//		}
//	}
//	return 0;
//}



//确定比赛名次
//a说；b第二，我第三     b说；我第二，e第四
//c说；我第一，d第二     d说；c最后，我第三
//e说；我第四，a第一
//每位选手都说对了一般半
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a ++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if(((b==2)+(a==3)==1)&&
//							((b==2)+(e==4)==1)&&
//							((c==1)+(d==2)==1)&&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if (a * b * c * d * e == 120)
//						
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							
//						}
//					}
//				}
//			}
//		}
//	}
//
//	return 0;
//}

//int* fun(int a, int b);//函数声明 - 有函数名 返回值类型 参数
//int(*) fun(int a, int b);//error
//int(*fun)(int a, int b);函数指针 
//(int*)fun(int a, int b);//函数声明 - 和第一种写法一样


#include<assert.h>
//左旋k个字符
////暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr);//断言
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋一个字符
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len - 1) = tmp;
//	}
//}

//三段逆序法实现左旋法
//abcdef - 左旋2个字符
//ba fedc - 先逆序左边2个 再逆序剩下右边的
//cdefab - 再整个逆序
//void reverse(char* left, char* right)//逆序函数
//{
//	assert(left!=NULL);
//	assert(right!=NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr, arr+k-1);//逆序左边
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//整体逆序
//}
//int is_left_move(char* s1, char* s2)//判断s1左旋能否得到s2
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);//左旋1个字符
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes");
//	}
//	else
//	{
//		printf("no");
//	}
//	return 0;
//}
////int main()
////{
////	char arr[] =  "abcdef" ;
////	left_move(arr, 2);
////	printf("%s\n", arr);
////	return 0;
////}


//字符串的追加 - strcat不能追加字符串本身
//int main()
//{
//	char arr1[20] = "abc";
//	char arr2[] = "def";
//	strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	
//	return 0;
//}
//字符串追加 - 用于追加字符串本身的 - strncat(str1,str1,len)


//判断s2是否是s1左旋得到的 - 非左旋法 - 给s1追加它本身然后判断s2是否为s1的子串
int is_left_move(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	if (len1 != len2)
	{
		return 0;
	}
	//1.给str1追加它本身
	
	strncat(str1, str1, len1);
	
	//2.判断str2是不是追加后的str1的子串
	//strstr - 找子串 - 是子串返回首字符地址，不是子串返回空指针
	char* ret = strstr(str1, str2);
	if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "cdefab";
	int ret = is_left_move(arr1, arr2);
	if (ret == 1)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}