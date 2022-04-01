#define _CRT_SECURE_NO_WARNINGS 1

#include "contact.h"

void InitContact(struct Contact* pc)//初始化通讯录
{
	assert(pc);
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data)); //把内存变全0
}

void AddContact(struct Contact* pc) //添加联系人
{
	assert(pc);
	if (MAX == pc->sz)
	{
		printf("*** 通讯录已满,无法添加 ***\n");
		return;
	}
	//录入信息
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->sz].name);
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->sz].sex);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->sz].age));
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->sz].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->sz].addr);
	
	pc->sz++;
	printf("*** 添加成功 ***\n");
}

void PrintContact(const struct Contact* pc) //打印通讯录
{
	assert(pc);
	if (0 == pc->sz)
	{
		printf("*** 通讯录为空 ***\n");
		return;
	}
	int i = 0;
	printf("%-20s %-5s %-5s %-13s %-30s\n","名字","性别","年龄","电话","地址");
	for (i = 0; i < pc->sz; i++)
	{
		printf("%-20s %-5s %-5d %-13s %-30s\n", pc->data[i].name,
			pc->data[i].sex,pc->data[i].age, 
			pc->data[i].tele, pc->data[i].addr);
	}
}

//按名字查找
//找到返回下标,没找到返回-1
int FindByName(const Contact* pc)
{
	assert(pc);
	int i = 0;
	char name[NAME_MAX] = { 0 };
	printf("请输入要查找的联系人名字:>");
	scanf("%s", name);
	for (i = 0; i < pc->sz; i++)
	{
		if (0 == strcmp(pc->data[i].name, name))
			return i;
	}
	return -1;
}

void DelContact(struct Contact* pc) //删除指定联系人 或 全部联系人
{
	assert(pc);
	if (0 == pc->sz)
	{
		printf("*** 通讯录已空,无法删除 ***\n");
		return;
	}
	//删除:
	int num = 0;
	//选择删除的方式
	do
	{
		printf("可选择的删除方式: 1.指定联系人  2.全部联系人 \n请输入编号:>");
		scanf("%d", &num);
		if (num < 1 || num > 2)
			printf("输入有误,请重新输入\n");
	} while (num < 1 || num > 2);
	if (1 == num)
	{
		//1.查找要删除的联系人
		int pos = FindByName(pc); //找到返回下标,没找到返回-1
		if (-1 == pos)
		{
			printf("*** 没找到相对应的联系人 ***\n");
			return;
		}

		//2.删除联系人 
		int del_sz = (pc->data + pc->sz) - (pc->data + pos + 1);
		//待删除的联系人后面的人数个数 * 一人的内存大小 = 要删除的人后面的内存总大小
		del_sz *= sizeof(pc->data[0]);
		memcpy(pc->data + pos, pc->data + pos + 1, del_sz);//一片内存往前复制
		pc->sz--;
		printf("*** 指定联系人已删除成功 ***\n");
		return;
	}
	if (2 == num)
	{
		pc->sz = 0;
		printf("*** 全部联系人已全部清空 ***\n");
		return;
	}

}

void SearchContact(const struct Contact* pc) //查找联系人
{
	assert(pc);
	if (0 == pc->sz)
	{
		printf("*** 通讯录为空 ***\n");
		return;
	}
	int pos = FindByName(pc);
	if (-1 == pos)
	{
		printf("*** 没找到相对应的联系人 ***\n");
		return;
	}
	printf("%-20s %-5s %-5s %-13s %-30s\n", "名字", 
		               "性别", "年龄","电话", "地址");
	printf("%-20s %-5s %-5d %-13s %-30s\n", pc->data[pos].name, 
		pc->data[pos].sex, pc->data[pos].age,
		pc->data[pos].tele, pc->data[pos].addr);
}

void ModifyContact(struct Contact* pc) //修改指定联系人信息
{
	assert(pc);
	if (0 == pc->sz)
	{
		printf("*** 通讯录为空 ***\n");
		return;
	}
	int pos = FindByName(pc);
	if (-1 == pos)
	{
		printf("*** 没找到相对应的联系人 ***\n");
		return;
	}
	printf("%-20s %-5s %-5s %-13s %-30s\n","名字","性别","年龄","电话","地址");
	printf("%-20s %-5s %-5d %-13s %-30s\n", pc->data[pos].name,
		pc->data[pos].sex, pc->data[pos].age,
		pc->data[pos].tele, pc->data[pos].addr);

	//修改信息
	printf("请修改名字:>");
	scanf("%s", pc->data[pos].name);
	printf("请修改性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请修改年龄:>");
	scanf("%d", &(pc->data[pos].age));
	printf("请修改电话:>");
	scanf("%s", pc->data[pos].tele);
	printf("请修改地址:>");
	scanf("%s", pc->data[pos].addr);

	printf("*** 修改成功 ***\n");
}

//排序实现的准备
int cmp_char(const void* e1, const void* e2) //比较char类型的函数
{
	// 返回两个字符串对比strcmp函数的返回值
	return strcmp(((PeoInfo*)e1)->name, ((PeoInfo*)e2)->name);
}

int cmp_int(const void* e1, const void* e2) //比较int类型的函数
{
	return ((PeoInfo*)e1)->age - ((PeoInfo*)e1)->age;
}

void MySwap(char* p1, char* p2, int width)//交换函数
{
	int i = 0;
	for (i = 0; i < width; i++) //每个char类型进行交换
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}

//排序函数
void MyQsort(void* base, int sz, int width,
	int (*cmp)(const void* e1, const void* e2)) 
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width,
				(char*)base + (j + 1) * width) > 0) //返回值 > 0 进行交换
			{
				//交换
				MySwap((char*)base + j * width,
					(char*)base + (j + 1) * width, width);
			}
		}
	}
}

void SortContact(struct Contact* pc) //排序联系人排序
{
	assert(pc);
	int num = 0;
	//排序的方式
	do
	{
		printf("可选择的排序方式: 1.名字  2.年龄 \n请输入编号:>");
		scanf("%d", &num);
		if (num < 1 || num > 2)
			printf("输入有误,请重新输入\n");
	} while (num < 1 || num > 2);
	
	//排序的实现
	if (1 == num)
	{
		MyQsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp_char);
	}
	if (2 == num)
	{
		MyQsort(pc->data, pc->sz, sizeof(pc->data[0]), cmp_int);
	}

	printf("*** 排序成功 ***\n");
}


