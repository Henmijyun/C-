#define _CRT_SECURE_NO_WARNINGS 1

#include "slist.h"

void SListTest1()
{
	SListNode* plist = BuySListNode(1);
	SListPushBack(&plist, 2);//β��
	SListPushBack(&plist, 3);
	SListPrint(plist);

	SListPushFront(&plist, 0);//ͷ��
	SListPrint(plist);

	SListPopBack(&plist);//βɾ
	SListPrint(plist);

	SListPopFront(&plist);//ͷɾ
	SListPrint(plist);
}


int main()
{
	SListTest1();


	return;
}
