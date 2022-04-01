#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include<windows.h>

//类型的声明
#define MAX 1000
#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

typedef struct PeoInfo //一个人的信息
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];

} PeoInfo;

typedef struct Contact //整个通讯录
{
	PeoInfo data [MAX]; //创建通讯录
	int sz; //保存的信息个数
} Contact;

//函数声明
void InitContact(struct Contact* pc);//初始化通讯录

void AddContact(struct Contact* pc); //添加联系人

void DelContact(struct Contact* pc); //删除指定联系人 或 全部联系人

void SearchContact(const struct Contact* pc); //查找联系人

void ModifyContact(struct Contact* pc); //修改指定联系人信息

void SortContact(struct Contact* pc); //排序联系人排序

void PrintContact(const struct Contact* pc); //打印通讯录