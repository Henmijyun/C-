#define _CRT_SECURE_NO_WARNINGS 1

#include "slist.h"


//动态申请一个节点
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* ret = (SListNode*)malloc(sizeof(SListNode));
	assert(ret);
	ret->data = x;
	ret->next = NULL;
	return ret;
}

//打印
void SListPrint(SListNode* plist)
{
	assert(plist);
	SListNode* tail = plist;
	while (tail)
	{
		printf("%d->", tail->data);
		tail = tail->next;
	}
	printf("NULL\n");
}


// 单链表尾插
void SListPushBack(SListNode** pplist, SLTDateType x)
{
	assert(*pplist);
	SListNode* p = BuySListNode(x);
	SListNode* tail = *pplist;
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = p;
}


// 单链表的头插
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(*pplist);
	SListNode* p = BuySListNode(x);
	p->next = *pplist;
	*pplist = p;
}

// 单链表的尾删
void SListPopBack(SListNode** pplist)
{
	assert(*pplist);
	if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
		return;
	}

	SListNode* tail = *pplist;
	while (tail->next->next != NULL)
	{
		tail = tail->next;
	}
	free(tail->next);
	tail->next = NULL;
}

// 单链表头删
void SListPopFront(SListNode** pplist)
{
	assert(*pplist);
	if ((*pplist)->next == NULL)
	{
		free(*pplist);
		*pplist = NULL;
		return;
	}

	SListNode* pre = *pplist;
	*pplist = (*pplist)->next;
	free(pre);
	pre = NULL;
}

// 单链表查找
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	assert(plist);

}