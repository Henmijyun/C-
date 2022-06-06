#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

//ջ�ṹ����̬��
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top;      //ջ��
	int capacity;   //�ռ�
}ST;

void StackInit(ST* ps);  //��ʼ��
void StackDestory(ST* ps);  //����

void StackPush(ST* ps, STDataType x); //����
void StackPop(ST* ps);  //ɾ��

STDataType StackTop(ST* ps); //��ȡջ������
bool StackEmpty(ST* ps);  //�ж��Ƿ�Ϊ��
int StackSize(ST* ps);   //��ȡջ�����ݵ�����
