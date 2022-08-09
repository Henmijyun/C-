#pragma once

#include <string.h>
#include <stdlib.h>

#include <iostream>
using namespace std;


struct Stack
{
	int* _a;  //以前初始化为NULL，但是不好。
	int _top;
	int _capacity;
	//如果已知要插入的数据量，但是还是需要不断扩容。扩容会对内存造成碎片化。（扩容有代价）
	//每次乘二也不方便
};

void StackInit(struct Stack* ps, int capacity = 4);