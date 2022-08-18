#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

//ջ�ṹ����̬��
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;      //ջ��
	int _capacity;   //�ռ�
}ST;

//C�ڶ�ȡC++�ľ�̬��ʱ���Ȼ�չ�� .h ��ͷ�ļ���extern "C"��C++���﷨��C���޷�ʶ��ġ�
//��ʱ��Ҫ���ϣ�#ifdef __cplusplus ��  #endif  ����� �ꡣ
//������ʹ�ú��е���䣬��C++�����п��Ա�ʶ�𣬵�����C�����У��ͻ��ڱ���ʱɾ����

#ifdef __cplusplus 
extern "C"
{
#endif // __cplusplus

	void StackInit(ST* ps);  //��ʼ��
	void StackDestory(ST* ps);  //����

	void StackPush(ST* ps, STDataType x); //����
	void StackPop(ST* ps);  //ɾ��

	STDataType StackTop(ST* ps); //��ȡջ������
	bool StackEmpty(ST* ps);  //�ж��Ƿ�Ϊ��
	int StackSize(ST* ps);   //��ȡջ�����ݵ�����

#ifdef __cplusplus
}
#endif // __cplusplus

