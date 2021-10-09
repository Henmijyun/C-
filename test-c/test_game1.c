#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字


#include<stdio.h>
#include <stdlib.h>
#include<time.h>
#include<windows.h>
void menu()
{
	printf("##########猜字游戏##########\n");
	printf("############################\n");
	printf("####  1.开始    0.结束  ####\n");
	printf("############################\n");
}
void game()
{
	//1.生成一个随机数字 
	int ret = 0;
	int guess = 0;//接收猜的数字
	// 用rand()函数产生一个0 ~ 0x7fff的随机数，即最大是32767的一个数,头文件stdlib.h

	ret = rand()%100+1; //生成1~100之间的随机数
	//printf("%d\n",ret);
	//2.猜数字
	while (1)
	{
		printf("请猜数字（1~100）:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("你猜的数有点大了\n\n");
		}
		else if (guess < ret)
		{
			printf("你猜的数有点小了\n\n");
		}
		else
		{
			printf("\n\n恭喜你猜对了,你真棒!!\n\n\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	//拿时间戳来设置随机数的生成起点
	//time_t time(time_t *timer)  这个time()函数的头文件time.h
	//time(NULL)空指针
	srand((unsigned int)time(NULL)); //srand()用来设置rand()产生随机数时的随机数种子。头文件stdlib.h  
	do
	{
		menu();
		char arr1[] = "!!!!!You are so strong!!!!!!";
		char arr2[] = "############################";
		int left = 0;
		printf("请选择(1或0)>:");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();    //猜数字游戏
			break;
		case 0:
			printf("退出游戏\n");
			goto aga;   //跳过各种循环，去到结束
		default:
			printf("输入错误,请重新输入\n");
			break;
		}

		//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//这里-1是errer，因为还有个隐藏的\n,所以要-2
		int right = strlen(arr1) - 1;             //函数strlen计算数组长度,-1是因为隐藏的\n

		do
		{
			arr2[left] = arr1[left];
			arr2[right] = arr1[right];
			printf("%s\n", arr2);

			Sleep(250);
			//system("cls"); 
			left++;
			right--;

		} while (left <= right);
		right++;
		char arr3[] = "############################";
		do
		{
			arr2[left] = arr3[left];
			arr2[right] = arr3[right];
			printf("%s\n", arr2);
			Sleep(250);
			//system("cls"); 
			left++;
			right--;
			if (right < 0)
				break;
		} while (left > right);
		printf("\n\n 你还想要再来一局吗？？\n");
		
	} while (input);
aga:
	return 0;
}


//时间戳:
//当前计算机的时间-计算机的起始时间(1970.1.1.0:0:0)=(xxxxx)秒
