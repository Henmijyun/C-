#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

//栈结构（动态）
typedef int STDataType;
typedef struct Stack
{
	STDataType* _a;
	int _top;      //栈顶
	int _capacity;   //空间
}ST;

//C在读取C++的静态库时，先会展开 .h 的头文件，extern "C"是C++的语法，C是无法识别的。
//这时就要加上：#ifdef __cplusplus 和  #endif  定义的 宏。
//这个宏会使得宏中的语句，在C++程序中可以被识别，但是在C程序中，就会在编译时删除。

#ifdef __cplusplus 
extern "C"
{
#endif // __cplusplus

	void StackInit(ST* ps);  //初始化
	void StackDestory(ST* ps);  //销毁

	void StackPush(ST* ps, STDataType x); //插入
	void StackPop(ST* ps);  //删除

	STDataType StackTop(ST* ps); //获取栈顶数据
	bool StackEmpty(ST* ps);  //判断是否为空
	int StackSize(ST* ps);   //获取栈内数据的数量

#ifdef __cplusplus
}
#endif // __cplusplus

