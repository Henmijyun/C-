/*#include<stdio.h>
int main(void)
{
	printf("hello,world\n");
	return 0;
}*/

#include<stdio.h>
/*int main()
{
	printf("こんにちは、世界\n");//日本語でもよろしいじゃない？
	return 0;

}*/
int main()
{
	char ch = 'A';         //char--字符类型  
	printf("%c\n",ch);     // %c--打印字符格式的数据   \n--换行的意思
	/* %f--打印浮点数字（打小数）
	   %p--以地址的形式打印
	   %x--打印十六进制数字
	   %o....*/
	//short int   //短整型

	int age = 20;           //整型
	printf("%d\n", age);    // %d--打印整型十进制数据

	//long 长整型
    long  nom = 11100;
	printf("%d\n", nom);
	
	float f = 5.2;     //单精度浮点数
	printf("%f\n", f);
	
	double d = 3.14;    //双精度浮点数
	printf("%lf\n", d);//打印双精度浮点数时，用%f可能会丢失精度，所以用%lf更为合适
	return 0;
}