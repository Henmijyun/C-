#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdlib.h>
//
//int main()
//{
//	int* ptr = (int*)malloc(10* sizeof(int));
//	if (NULL != ptr)
//	{
//		//使用空间
//		//..
//	}
//	//拓展扩容
//	int* ptr2 = (int*)realloc(ptr, 100 * sizeof(int));
//	if (NULL != ptr2)
//	{
//		//防止ptr被置为NULL，导致空间丢失
//		ptr = ptr2;
//		ptr2 = NULL;
//	}
//	else
//		perror("realloc");
//	//使用空间
//	//..
//	//归还空间
//	free(ptr);
// 	ptr = NULL;
//	return 0;
//}
//
//
//

//
//typedef struct st_type 
//{
//	int i;
//	int a[0];//柔性数组成员 
//}type_a;
//
//typedef struct st_type
//{
//	int i;
//	int a[];//柔性数组成员 
//}type_a;


//找单身狗
//一个数组中只有两个数字是出现一次，其他所有数字都出现了两次。
//编写一个函数找出这两个只出现一次的数字。
//
//#include <stdio.h>
//
//void search_of_dog(int* arr, int sz)
//{
//	int dog1 = 0;
//	int dog2 = 0;
//	//1.找出两个单身狗的 异或和 （所有数字的异或）
//	int i = 0;
//	int ret = 0;
//	for (i = 0; i < sz; i++)
//	{
//		ret ^= *(arr + i);
//	}
//
//	//2.计算ret中的二进制为1的位
//	int pos = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((ret >> i) & 1) == 1)
//		{
//			pos = i;
//			break;
//		}
//	}
//
//	//3.分组 （把第i位为1的放在一起（异或在一起））
//	for (i = 0; i < sz; i++)
//	{
//		if (((*(arr + i) >> pos) & 1) == 1)
//		{
//			dog1 ^= *(arr + i);
//		}
//	}
//
//	//5 ^ 6 ^ 5 == 6 (相当于两个5抵消了)
//	dog2 = ret ^ dog1;
//
//	printf("%d %d\n", dog1, dog2);
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	search_of_dog(arr, sz);
//	return 0;
//}
//


////模拟实现strncpy();  //复制指定个数的字符串
//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//    assert(dest && src);
//    char* ret = dest;
//    while (num--)
//    {
//        if (*src != '\0')
//        {
//            *dest++ = *src++;
//        }
//        else
//        {
//            *dest = '\0';
//            *dest++;
//        }
//    }
//    return ret;
//}
// 
//int main()
//{
//    char arr1[] = "abcdef";
//    char arr2[] = "holle";
//    char* ret = my_strncpy(arr1, arr2, 4);//指定复制字符的个数
//    //如果指定的个数为7,大于arr2的字符串数时,默认后面补'\0', holle\0\0
//
//    printf("%s\n", ret);
//    return 0;
//}




//#include <stdio.h>
////打开和关闭文件
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件 - 输入操作
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF) //读取文件中的内容
//	{
//		printf("%c", ch);
//	}
//
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//
//#include <stdio.h>
////打开和关闭文件
//int main()
//{
//	//打开文件
//	FILE* pf = fopen("E:\\1_C\\repos\\lianxiyong\\test_4_1\\test.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件 - 输出操作
//	char ch = 'a';
//	for (ch = 'a'; ch <= 'z'; ch++) //把 a~z 写入文件中
//	{
//		fputc(ch, pf);
//	}
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}


//
//#include <stdio.h>
//int main()
//{
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//	fputc(ch, stdout);
//	return 0;
//}




//#include <stdio.h>
//int main()
//{
//	char arr[256] = { 0 };
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//读文件 - 读一行
//	fgets(arr, 255, pf);  //参数： 目标地址， 最多读（255 - 1）的数据 ，文件流
//	printf("%s", arr);
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//
//int main()
//{
//	struct S s = { 0 };
//
//	//打开文件
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//写文件
//	fscanf(pf, "%s %d %lf", s.name, &(s.age), &(s.d));
//	//printf("%s %d %lf\n", s.name, s.age, s.d);
//	fprintf(stdout, "%s %d %lf\n", s.name, s.age, s.d);//输出到标准输出流(屏幕)
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}



//#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//
//int main()
//{
//	char buf[256] = { 0 };
//	struct S s = { "zhangsan", 20, 95.5 };
//	struct S tmp = { 0 };
//	sprintf(buf, "%s %d %lf", s.name, s.age, s.d);
//	//printf("%s\n", buf);
//
//	//从buf字符串中提取结构体数据
//	sscanf(buf, "%s %d %lf", tmp.name, &(tmp.age), &(tmp.d));
//	printf("%s %d %lf", tmp.name, tmp.age, tmp.d);
//	return 0;
//}
//
//

//
//
//#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//
//int main()
//{
//	struct S s = { "zhangsan", 20, 95.5 };
//	//写文件 - 二进制的方式写
//	FILE* pf = fopen("test3.txt", "wb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制的方式写文件 (输出到文件中)
//	fwrite(&s, sizeof(struct S), 1, pf);//参数：数据起始地址，大小，个数，目标文件
//
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}



//#include <stdio.h>
//struct S
//{
//	char name[20];
//	int age;
//	double d;
//};
//
//int main()
//{
//	struct S s = { 0 };
//	//写文件 - 二进制的方式写
//	FILE* pf = fopen("test3.txt", "rb");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//二进制的方式读 (把文件中的内容读入到内存数据中)
//	fread(&s, sizeof(struct S), 1, pf);//参数：目标数据的地址，大小，个数，要读的文件
//	printf("%s %d %lf\n", s.name, s.age, s.d);
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


////模拟实现strncat
//#include <stdio.h>
//#include <assert.h>
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//    assert(dest && src);
//    char* ret = dest;
//    while (*dest) //找目标空间的\0
//    {
//        dest++;
//    }
//    while (num--) //从\0位置开始复制过去
//    {
//        *dest++ = *src++;
//    }
//    return ret;
//}
//int main()
//{
//    char arr1[20] = "abcdef";//确定目标空间大小能放下
//    char arr2[] = "holle";
//    char* ret = my_strncat(arr1, arr2, 3);//指定追加字符的个数
//    printf("%s\n", ret);
//    return 0;
//}


//atoi() 函数用来
// 将字符串里的数字字符转化为整形数，
//直到遇上数字或正负符号才开始做转换，而再遇到非数字或字符串结束时('/0')才结束转换
//原型为：int atoi(const char* str);

//#include <stdio.h>
//#include <assert.h>
//
//int my_atoi(const char* str)
//{
//	assert(str);
//	char tmp = 0;
//	int ret = 0;
//	while ((*str != '+') && (*str != '-') && (*str < '0') && (*str > '9'))
//	{
//		str++; //找起始位置
//	}
//	if (*str == '\0')
//	{
//		return 0; //找不到
//	}
//	if (*str == '+' || *str == '-')
//	{
//		tmp = *str; //找到了'+'或者'-' ,记录下来
//		str++;
//	}
//	
//	//到这里str一定指向数字, 转换
//	while ((*str >= '0') && (*str <= '9'))
//	{
//		ret *= 10;
//		ret += *str - '0';  //每次循环进位 , 加个位数值
//		str++;
//	}
//	
//	//最后在返回时, 加符号
//	if (tmp == '+')
//		return ret;
//	else
//		return 0 - ret;
//}
//
//int main()
//{
//	char arr[] = "-1105abc";
//	int i = 0;
//	i = my_atoi(arr);
//	printf("%d\n", i);
//	return 0;
//}




//#include <stdio.h>
//
//int main()
//{
//	//写文件 - 二进制的方式写
//	FILE* pf = fopen("test3.txt", "w");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	//随机写入
//	fputc('a', pf);
//	fputc('b', pf);
//	fputs("cdefg\n", pf);
//	fputs("hijkl\n", pf);
//
//	fseek(pf, -3, SEEK_CUR); //定位文件指针
//	fputs("XXXX", pf);
//	//SEEK_CUR - 文件指针当前的位置
//	//SEEK_END - 文件末尾的位置
//	//SEEK_SET - 文件开始的位置
//
//
//	long pos = ftell(pf); //返回文件指针相对于起始位置的偏移量
//	printf("%ld\n", pos);
//
//	rewind(pf); //文件指针的位置回到文件的起始位置
//
//	pos = ftell(pf);
//	printf("%ld\n", pos);
//	
//	//关闭文件
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
////

//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换。

#define 