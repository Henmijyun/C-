#define _CRT_SECURE_NO_WARNINGS 1

//#include<stdio.h>
//int Add(int x, int y)  //因为return z中的z是int整型，所以它返回值的Add前面也要加int。
//	{
//		int z = 0;
//		z = x + y;
//		return z;
//	}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//} 吧


//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[] = "bit";  //隐藏的/0也会被拷贝
//	char arr2[] = "#######";
//	char arr3[20];
//	strcpy(arr2, arr1);    //strcpy()函数 后面的值 拷贝到 前面的值 里:arr1-->arr2
//	strcpy(arr3, "11111111111");
//	printf("%s\n%s\n", arr2,arr3);
//	//strcpy - string copy - 字符串拷贝
//	//strlen - string length - 字符串长度有关
//	//memset
//	//memory - 内存  set - 设置
//	memset(arr3, '0', 5);   //memset()函数修改内存中的信息,memset( 修改的目标, 修改的内容, 修改的数量)
//	printf("%s\n", arr3);
//	return 0;
//}