#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//char-字符类型
//%d-打印整形//
//%c-打印字符
//%f-打印浮点数字-打小数
//%p-以地址的形式打印
//%x-打印16进制数字
//%o……
//int global = 2020;



int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%c\n", '\x61');
	printf("%c\n", '\132');
	printf("%c\n",'\ddd');

	//\32 --32是2个8进制的数字
	//32作为8进制代表的那个十进制数字，作为ASCII码值，对应的字符
	//32 --> 10进制+
	return 0;
}

//13

//int main()
//{
//	//printf("c:\test\32\test.c");
//	////\t - 水平制表符
//	//return 0;
//
//	//printf("(are you ok\?\?)\n");
//	//printf("%c\n",'\'');
//	//printf("%s\n","\"");
//
//	//return 0;
//}


//int main()
//{
//	printf("abc\n");
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%d\n", strlen(arr1));//strlen - string length --计算字符串长度的
//	printf("%d\n", strlen(arr2));
//	return 0;
//
//}



//int main()
//{
//
//	//#av$
//	//a - 97 
//	//A - 65
//	//ASCII编码
//	//ASCII码值
//
//	//char arr1[] = "abc";//数组
//	////"abc"--'a' 'b' 'c'  '\0'
//
//	//char arr2[] = { 'a','b','c' ,0 };
//	//char arr3[] = { 'a','b','c'};
//
//	//'\0' - 0
//	//'a' - 97
//	//'a" 'b' 'c'
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr3);
//	return 0;
//}


//int main()
//{
//	"abcdef";
//	"helloworld";
//	"";//字符串
//	return 0;
//}






//int main()
//{
//	{
//		int a = 10;
//		printf("a = %d\n", a);//ok
//	}
//	printf("a = %d\n", a);//error

//int main()
//{
//	/*未声明的标识符
//	声明extern外部声明*/
//	extern int g_val;
//	printf("g_val = %d\n",g_val);
//	return 0;

//void test() 
//{
//	printf("test()-- %d\n",global);
//}


//int main()
//{
//	test();
//	printf("%d\n", global);
//	return 0;


//int main()
//{
//	int num = 0;
//	printf("num = %d\n", num);
//	return 0;
	


	//计算2个数的和
	//int num1 = 0;
	//int num2 = 0;
	//int	sum = 0;

	//scanf("%d%d", &num1, &num2);
	//sum = num1 + num2;
	//printf("sum = %d\n", sum);
	//return 0;

	//char ch = 'A';
	//printf("%c/n,ch);
		//打印字符格式的数据
		//20
	//short int -短整型
	//int age = 20;
	/*printf("%d\n",age);
		打印整型十进制的数据
	return 0;*/
	//long num = 100;

//}



//包含一个叫stdio.h文件
//std 标准 stanndard input output
//
//#include <stdio.h>

//int main()  //主函数-程序的入口
//{
//	printf("hello\n");
//	return 0;
//}
//int是整型的意思
//main前面的int表示main函数调用返回一个整型值
//int main()
//{
//	return 0;//返回整数
//}


//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}

//int main()
//{
	//const -常属性

	//const int n = 10;//n 是变量，但又有常属性，所以我们说n是常变量
	////int arr[n] = { 0 }


	//n = 20;

	 

	/*const int num = 4;
	printf("%d\n",num);
	num = 8;
	printf("%d\n", num);
	return 0;*/
//}


//性别-一一列举
//
//性别：男，女，保密
//三原色：红、黄、蓝
//

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n",SECRET);
//	return 0;
//
//}

//enum Color
//{
//		RED,
//		YELLOW,
//		BLUE
//};
//int main()
//{
//	enum Color color = BLUE;
//
//	return 0;
//}

//#define MAX 10
//int main()
//{
//
//	int arr[MAX] = { 0 };
//	printf("%d\n",MAX);
//	return 0;
//}
