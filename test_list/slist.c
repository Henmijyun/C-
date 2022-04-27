#define _CRT_SECURE_NO_WARNINGS 1

#include "slist.h"


//��̬����һ���ڵ�
SListNode* BuySListNode(SLTDateType x)
{
	SListNode* ret = (SListNode*)malloc(sizeof(SListNode));
	assert(ret);
	ret->data = x;
	ret->next = NULL;
	return ret;
}

//��ӡ
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


// ������β��
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


// �������ͷ��
void SListPushFront(SListNode** pplist, SLTDateType x)
{
	assert(*pplist);
	SListNode* p = BuySListNode(x);
	p->next = *pplist;
	*pplist = p;
}

// �������βɾ
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

// ������ͷɾ
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

// ���������
SListNode* SListFind(SListNode* plist, SLTDateType x)
{
	assert(plist);

}