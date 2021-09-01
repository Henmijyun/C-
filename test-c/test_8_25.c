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
//#include<stdio.h>
//int main()
//{
//	int ch = 0;                    //ctrl + z
	//while ((ch = getchar()) !=EOF) //EOF - end of file -> 值为-1  （文件结束标志）
	//{
	//	putchar(ch);
	//}
	//int ch = getchar();    //输入
	//putchar(ch);           //输出，与printf函数一样
	// 
	//while((ch=getchar()) !='\n')    //当我们用printf打印之后，会在输入缓冲区剩下东西，这个代码可以帮助我们清空
	//{                            //循环读取缓冲区的数，直到不等于'/n'，这时缓冲区被清空，跳出循环
	//    ;
	//}

//	while((ch=getchar()) !=EOF) //创建循环输入
//	{
//	   if(ch<'0' || ch>'9')      //ch小于0并且大于9的值，全部跳过本次循环
//		 continue;            //所以这里只有0~9可以被输出
//	   putchar(ch);
//	}
//
//
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	//  初始化  判断   调整   三要素一起合在for循环中
//	for (i = 0;i <= 10;i++)
//	{
//		//if (i == 5)
//		//	break;        //这里break也是中止整个循环，跳到}
//		if (i == 5)
//			continue;     //这里continue也是中止本次循环，跳到} ,但不会死循环
//		printf("%d ", i);
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	//for(;;)
//	int a = 0;
//	int b = 0;
//	for (a=0;a<10;a++)  //得出的结果为：100次hehe
//	{                     //但是，如果省略a=0和b=0的话，只会打出10个hehe。
//		for(b=0;b<10;b++) //因为当第2个for结束循环时，b=10，第1个for循环进去，b为假，又跳出来，所以不会发生改变
//		printf("hehe\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++) //++不管前置还是后置都是加一
//	{
//		printf("hehe\n");      //得两个hehe，第三次x=2，为假，跳出循环
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	do
//	{
//		//if (i == 5)
//		//	break;   //结果为：1 2 3 4，中止整个循环
//		//if (i == 5)  
//		//	continue;  //结果为：1 2 3 4 死循环
//
//		printf("%d ", i);
//		i++;
//	}
//	while (i <= 10);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 1;
//	int sum = 0;
//	for (b = 1; b <= 10; b++)
//	{
//		ret = ret * b;        
//		//b的阶乘
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 1;
//	int sum = 0;
//	for (b = 1; b <= 3; b++)
//	{
//		ret = 1;
//		for (a = 1; a <= b; a++)
//		{
//			ret = ret * a;        //b的阶乘
//		}
//		sum = sum + ret;
//		
//	}
//
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 1;
//	scanf("%d", &b);       //输入b的值
//	for (a = 1; a<=b; a++)
//	{
//		ret = ret * a;      //这个循环从1开始乘，一直乘到b+1的值才跳出循环
//	}
//	printf("ret=%d\n",ret);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]); //计算元素个数 = 数组总大小 / 每个元素的大小
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d \n", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("找不到\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,8,9,10 };
//	int k = 7;                              //要找的数
//
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int left = 0;                //左下标
//	int right = sz - 1;          //右下标
//
//	while (left <= right)         //条件: 左 <= 右
//	{
//		int mid = (left + right) / 2;  //中点
//		if (arr[mid] > k)
//		{
//			right = mid - 1;       //折中后的右下标
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;        //折中后的左下标
//		}
//		else
//		{
//			printf("找到了,下标是: %d\n", mid);    //折中后的中点
//			break;
//		}
//	}
//	if (left > right)              //条件:左 > 右 (增加稳定性)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}\


#include<stdio.h>
#include<string.h>
#include<windows.h> //Sleep 停止函数的头文件
#include<stdlib.h>  //system 执行系统命令函数的头文件
int main()
{
	char arr1[] = "welcome to bit!!!!!";
	char arr2[] = "###################";
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//这里-1是errer，因为还有个隐藏的\n,所以要-2
	int right = strlen(arr1) - 1;             //函数strlen计算数组长度,-1是因为隐藏的\n

	do
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		
		Sleep(200);   
		//system("cls"); 
		left++;
		right--;

	} 
	while (left <= right);
	right++;
	char arr3[]= "###################";
	do
	{
		arr2[left] = arr3[left];
		arr2[right] = arr3[right];
		printf("%s\n", arr2);
		Sleep(200);   
		//system("cls"); 
		left++;
		right--;
		if (right < 0)
			break;
	} 
	while (left > right);
	do
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);

		Sleep(200);
		//system("cls"); 
		left++;
		right--;

	} while (left <= right);
	printf("%s\n", arr2);
	return 0;
}