#define _CRT_SECURE_NO_WARNINGS 1

#include "Stack.h"

void StackInit(ST* ps) //��ʼ��
{
	assert(ps);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void StackDestory(ST* ps) //����
{
	assert(ps);
	free(ps->a);
	ps->a = NULL;
	ps->top = 0;
	ps->capacity = 0;
}

void StackPush(ST* ps, STDataType x) //����
{
	assert(ps);

	if (ps->top == ps->capacity)  //����
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		STDataType* tmp = (STDataType*)realloc(ps->a, sizeof(STDataType) * newCapacity);
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}

		ps->a = tmp;
		ps->capacity = newCapacity;
	}

	ps->a[ps->top] = x;
	ps->top++;
}

void StackPop(ST* ps)  //ɾ��
{
	assert(ps);
	assert(!StackEmpty(ps));
	ps->top--;
}

STDataType StackTop(ST* ps) //��ȡջ������
{
	assert(ps);
	assert(!StackEmpty(ps));

	return ps->a[ps->top - 1];
}

bool StackEmpty(ST* ps) //�ж��Ƿ�Ϊ��
{
	assert(ps);
	return ps->top == 0;
}

int StackSize(ST* ps)   //��ȡջ�����ݵ�����
{
	assert(ps);
	return ps->top;
}








