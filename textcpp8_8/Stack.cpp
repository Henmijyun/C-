#define _CRT_SECURE_NO_WARNINGS 1



#include "Stack.h"

void StackInit(struct Stack* ps, int capacity)//°ëÈ±Ê¡
{
	ps->_a = (int*)malloc(sizeof(int) * capacity);
	//
	ps->_top = 0;
	ps->_capacity = capacity;
}
