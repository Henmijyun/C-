#pragma once

#include <string.h>
#include <stdlib.h>

#include <iostream>
using namespace std;


struct Stack
{
	int* _a;  //��ǰ��ʼ��ΪNULL�����ǲ��á�
	int _top;
	int _capacity;
	//�����֪Ҫ����������������ǻ�����Ҫ�������ݡ����ݻ���ڴ������Ƭ�����������д��ۣ�
	//ÿ�γ˶�Ҳ������
};

void StackInit(struct Stack* ps, int capacity = 4);