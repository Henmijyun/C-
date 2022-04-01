#pragma once

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include<windows.h>

//���͵�����
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

typedef struct PeoInfo //һ���˵���Ϣ
{
	char name[NAME_MAX];
	char sex[SEX_MAX];
	int age;
	char tele[TELE_MAX];
	char addr[ADDR_MAX];

} PeoInfo;

typedef struct Contact //����ͨѶ¼
{
	PeoInfo data [MAX]; //����ͨѶ¼
	int sz; //�������Ϣ����
} Contact;

//��������
void InitContact(struct Contact* pc);//��ʼ��ͨѶ¼

void AddContact(struct Contact* pc); //�����ϵ��

void DelContact(struct Contact* pc); //ɾ��ָ����ϵ�� �� ȫ����ϵ��

void SearchContact(const struct Contact* pc); //������ϵ��

void ModifyContact(struct Contact* pc); //�޸�ָ����ϵ����Ϣ

void SortContact(struct Contact* pc); //������ϵ������

void PrintContact(const struct Contact* pc); //��ӡͨѶ¼