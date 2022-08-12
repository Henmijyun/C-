#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include"../StackC/Stack.h" //Ïà¶ÔÂ·¾¶

bool isValid(const char* s) {
	ST st;
	StackInit(&st);
	while (*s)
	{
		if (*s == '(' || *s == '[' || *s == '{')
		{
			StackPush(&st, *s);
			++s;
		}
		else
		{
			if (StackEmpty(&st))
			{
				StackDestory(&st);
				return false;
			}

			STDataType top = StackTop(&st);
			StackPop(&st);
			if ((top == '{' && *s == '}')
				|| (top == '[' && *s == ']')
				|| (top == '(' && *s == ')'))
			{
				++s;
			}
			else
			{
				StackDestory(&st);
				return false;
			}
		}
	}

	bool ret = StackEmpty(&st);
	StackDestory(&st);
	return ret;
}

int main()
{
	printf("%d\n", isValid("{}{}{}"));

	return 0;
}
