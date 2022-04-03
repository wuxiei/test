#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<errno.h>
#include<string.h>
//文件操作

//1.文件操作首先要打开文件  操作完后要关闭文件释放指针 这些步骤不能少
int main()
{

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
	char buf[1024] = { 0 };
	/*fgets(buf, 1024, stdin);//从标准输入流读取
	fputs(buf, stdout);//输出到标准输出流*/
	//等价于下面的写法
	gets(buf);
	puts(buf);

	return 0;
}