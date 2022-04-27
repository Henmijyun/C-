#define _CRT_SECURE_NO_WARNINGS 1

#include "slist.h"

void SListTest1()
{
	SListNode* plist = BuySListNode(1);
	SListPushBack(&plist, 2);//尾增
	SListPushBack(&plist, 3);
	SListPrint(plist);

	SListPushFront(&plist, 0);//头增
	SListPrint(plist);

	SListPopBack(&plist);//尾删
	SListPrint(plist);

	SListPopFront(&plist);//头删
	SListPrint(plist);
}


int main()
{
	SListTest1();


	return;
}
