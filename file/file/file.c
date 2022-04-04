#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
//文件操作

//1.文件操作首先要打开文件  操作完后要关闭文件释放指针 这些步骤不能少
//int main()
//{

	//写文件
//	FILE* pf = fopen("text.txt", "w");//路径，打开方式
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//打开失败，返回错误码
//	}
//	//写文件
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;


	//读文件
//FILE* pf = fopen("text.txt", "r");//打开方式：读
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));//打开失败
//		return 0;
//	}
//	//读文件 - 文件的读取是一个字符一个字符读取的
//	int ch = fgetc(pf);//用变量ch接收从pf中读出的数据
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	ch = fgetc(pf);
//	printf("%c", ch);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;



	//fgets从所有输入流中读取数据
	//fgets一次只读取一行数据 并且会读取文件中的回车键当作\n换行，如果在文件中末尾行没有回车，则fgets读取不会换行
	//char buf[1024] = { 0 };//定义数组存放读出的数据
	//FILE* pf = fopen("text.txt", "r");
	//	if (pf == NULL)
	//	{
	//		printf("%d\n", strerror(errno));
	//		return 0;
	//	}
	//	//读文件
	//	fgets(buf, 1024, pf);//从pf中读取1024个字节存放到buf中
	//	printf("%s", buf);
	//	fgets(buf, 1024, pf);
	//	printf("%s", buf);
	//	
	//	//关闭文件
	//	fclose(pf);
	//	pf = NULL;


	//fputs写入一行数据 参数：要写入的数就类型为string型  要写入的地址
	//fputs不会换行，要在写入时加\n实现换行
	//char buf[1024] = { 0 };
	//FILE*pf = fopen("text.txt", "w");
	//if (pf == NULL)
	//{
	//	return 0;
	//}
	////写入文件
	//fputs("hello ll\n", pf);
	//fputs("kdhcnvks", pf);

	////关闭文件
	//fclose(pf);
	//pf = NULL;



	//从键盘上读取一行信息
//	char buf[1024] = { 0 };
//	/*fgets(buf, 1024, stdin);//从标准输入流读取
//	fputs(buf, stdout);//输出到标准输出流*/
//	//等价于下面的写法
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
	//	//把格式化的数据转换成字符串储存到buf
	//	sprintf(buf, "%d %f %s", s.n, s.score, s.arr);
	//	printf("%s\n", buf);
	//	//从buf中读取格式化的数据到tmp中
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
//	struct S s = { "张三",20,55.6 };
//	FILE* pf = fopen("text.tex", "wb");
//	if (pf == NULL)
//	{
//		return;
//	}
//	//二进制形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);//要写入的文件来自哪里，要写入的元素多大字节，几个元素，写入到哪里
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
//	//二进制形式读取文件
//	fread(&tmp, sizeof(struct S), 1, pf);//读出的数据放哪里，要读的元素多大字节，几个元素，从哪里读
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
//	//1.定位文件指针
//	fseek(pf, 4, SEEK_CUR);//SEEK_CUR文件指针的当前位置 向后偏移4个字节
//	//2.读取文件
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
//	//1.定位文件指针
//	fseek(pf, -2, SEEK_END);//SEEK_END文件的末尾位置 向前偏移2个字节 注意这个偏移位置是负数！！！！
//	//2.读取文件
//	//int ch = fgetc(pf);
//
//	int pos = ftell(pf);//ftell(pf)获取文件读写指针的当前位置
//	printf("%d\n", pos);
//
//	void rewind(pf);//rewind让文件指针位置回到文件起始位置
//
//	pos = ftell(pf);
//	printf("%d\n", pos);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}