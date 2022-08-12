#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;

//在函数前加extern "C"，意思是告诉编译器，将该函数按照C语言规则来编译。
extern "C"
{
    #include "../StackC/Stack.h" //相对路径
}

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
    cout << isValid("{}{}{}") << endl;
    return 0;
}