#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//char-�ַ�����
//%d-��ӡ����//
//%c-��ӡ�ַ�
//%f-��ӡ��������-��С��
//%p-�Ե�ַ����ʽ��ӡ
//%x-��ӡ16��������
//%o����
//int global = 2020;



int main()
{
	printf("%d\n", strlen("c:\test\32\test.c"));
	printf("%c\n", '\x61');
	printf("%c\n", '\132');
	printf("%c\n",'\ddd');

	//\32 --32��2��8���Ƶ�����
	//32��Ϊ8���ƴ�����Ǹ�ʮ�������֣���ΪASCII��ֵ����Ӧ���ַ�
	//32 --> 10����+
	return 0;
}

//13

//int main()
//{
//	//printf("c:\test\32\test.c");
//	////\t - ˮƽ�Ʊ��
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
//	printf("%d\n", strlen(arr1));//strlen - string length --�����ַ������ȵ�
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
//	//ASCII����
//	//ASCII��ֵ
//
//	//char arr1[] = "abc";//����
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
//	"";//�ַ���
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
//	/*δ�����ı�ʶ��
//	����extern�ⲿ����*/
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
	


	//����2�����ĺ�
	//int num1 = 0;
	//int num2 = 0;
	//int	sum = 0;

	//scanf("%d%d", &num1, &num2);
	//sum = num1 + num2;
	//printf("sum = %d\n", sum);
	//return 0;

	//char ch = 'A';
	//printf("%c/n,ch);
		//��ӡ�ַ���ʽ������
		//20
	//short int -������
	//int age = 20;
	/*printf("%d\n",age);
		��ӡ����ʮ���Ƶ�����
	return 0;*/
	//long num = 100;

//}



//����һ����stdio.h�ļ�
//std ��׼ stanndard input output
//
//#include <stdio.h>

//int main()  //������-��������
//{
//	printf("hello\n");
//	return 0;
//}
//int�����͵���˼
//mainǰ���int��ʾmain�������÷���һ������ֵ
//int main()
//{
//	return 0;//��������
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
	//const -������

	//const int n = 10;//n �Ǳ����������г����ԣ���������˵n�ǳ�����
	////int arr[n] = { 0 }


	//n = 20;

	 

	/*const int num = 4;
	printf("%d\n",num);
	num = 8;
	printf("%d\n", num);
	return 0;*/
//}


//�Ա�-һһ�о�
//
//�Ա��У�Ů������
//��ԭɫ���졢�ơ���
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
