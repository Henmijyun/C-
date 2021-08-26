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

#include<stdio.h>
int main()
{
	int a = 10;
	int b = 20;
	if (a == 0)   //这里为假，后面的都不执行了。后面的else跟第二个if匹配，所以跟这里没有关系
	{
		if (b == 20)
			printf("hehe\n");
	}
	else
			printf("haha\n"); //else是跟离它最近的，未匹配的if，进行匹配。所以这里匹配的是第二个if
	return 0;
}