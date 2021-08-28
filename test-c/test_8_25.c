#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int age = 60;
//	if (age < 18)
//		printf("未成年\n");
//	else
//	{
//		if (age >= 18 && age < 28)
//			printf("青年\n");
//		else if (age >= 28 && age < 50)
//			printf("壮年\n");
//		else if (age >= 50 && age < 90)
//			printf("老年\n");
//		else
//			printf("老不死");
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}                           //{}叫做代码块
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (a == 0)   //这里为假，后面的都不执行了。后面的else跟第二个if匹配，所以跟这里没有关系
//	{
//		if (b == 20)
//			printf("hehe\n");
//	}
//	else
//			printf("haha\n"); //else是跟离它最近的，未匹配的if，进行匹配。所以这里匹配的是第二个if
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int num = 4;
//	if (5 == num)     //判断相等时，反过来写可以确保不会出错
//	{
//		printf("hehe\n");
//	}
//
//	//if (num = 5)    // = 是赋值，== 判断相等
//	//{
//	//	printf("呵呵\n");
//	//}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	//int b = 0;
//	//while (b <= 100)
//	//{
//	//	if (1 == b % 2)
//	//	printf("%d\n", b);
//	//		b++;
//	//}
//	int a = 1;
//	while (a <= 100)
//	{
//		printf("%d ", a);
//		a += 2;        //这种方式int a要=1，才能循环出奇数
//	}
//	if (1 == a % 2)
//	{
//		printf("奇数\n");
//	}
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		if(n==1)
//			printf("hehe\n");
//	case 2:
//	case 3:	
//	case 4:
//		printf("工作日\n");//输入1~4都会显示工作日，语句项可以为空白
//		break;
//	case 5:
//	case 6:
//		printf("休息日\n");
//		break;
//	default:          //默认，输入没有的选项时，尽量每次case语句项都加default和break
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 9)
//			break;  //break用于永久中止循环。i循环到5时，停止循环，直接跳到 } ，所以没有经过printf，就没有打印出来
//		if (i == 5)
//			continue;//continue用于中止本次循环，（后面的printf本次不打印）回到上面while重新开始循环
//		printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
#include<stdio.h>
int main()
{
	int ch = 0;                    //ctrl + z
	while ((ch = getchar()) !=EOF) //EOF - end of file -> 值为-1  （文件结束标志）
	{
		putchar(ch);
	}
	//int ch = getchar();    //输入
	//putchar(ch);           //输出，与printf函数一样

	return 0;
}