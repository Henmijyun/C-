#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void menu()
{
	printf("*************************\n");
	printf("*** 1.add    2.del    ***\n");
	printf("*** 3.search 4.modify ***\n");
	printf("*** 5.sort   6.print  ***\n");
	printf("*** 0.exit            ***\n");
	printf("*************************\n");
}

void test()
{
	int input = 0;
	//创建通讯录
	Contact con;
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con); //添加联系人
			Sleep(1000); //停止1秒
			break;
		case DEL:
			DelContact(&con); //删除指定联系人 或 全部联系人
			Sleep(1000);
			break;
		case SEARCH:
			SearchContact(&con); //查找联系人
			Sleep(5000);
			break;
		case MODIFY:
			ModifyContact(&con); //修改指定联系人信息
			Sleep(1000);
			break;
		case SORT:
			SortContact(&con); //排序联系人排序
			Sleep(1000);
			break;
		case PRINT:
			PrintContact(&con); //打印通讯录
			Sleep(5000);
			break;
		case EXIT:
			DestroyContact(&con);
			printf("*** 退出通讯录 ***\n");
			Sleep(1000);
			break;
		default:
			printf("*** 输入有误,请重新输入 ***\n");
			Sleep(1000);
			break;
		}
		system("cls"); //清屏
	} while (input);
}

int main()
{
	test();
	return 0;
}





