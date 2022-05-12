#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void SeqListInit(SeqList* ps) //初始化
{
	assert(ps);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListCheckCapacity(SeqList* ps)  //检查容量空间
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2; //刚开始4，后面每次*2
		SLDateType* tmp = (SLDateType*)realloc(ps->a, newCapacity * sizeof(SLDateType));
		if (tmp == NULL)
		{
			printf("realloc : fail\n");
			exit(-1);
		}
		//更新
		ps->a = tmp;
		tmp = NULL;
		ps->capacity = newCapacity;
	}
}

void SeqListDestroy(SeqList* ps) //销毁
{
	assert(ps);
	if (ps->a)
	{
		free(ps->a);
		ps->a = NULL;
		ps->size = 0;
		ps->capacity = 0;
		printf("销毁成功\n");
	}

}

void SeqListPrint(SeqList* ps) //打印
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListPushBack(SeqList* ps, SLDateType x)  //尾增
{
	assert(ps);
	SeqListInsert(ps, ps->size, x); //重调用
}
void SeqListPushFront(SeqList* ps, SLDateType x)  //头增
{
	assert(ps);
	SeqListInsert(ps, 0, x); //重调用

	//SeqListCheckCapacity(ps);//检查容量

	//if (ps->size > 0) //挪动头数据
	//{
	//	int end = ps->size - 1;
	//	while (end >= 0)    //数组在尾部+1个位置
	//	{
	//		ps->a[end + 1] = ps->a[end];
	//		--end;
	//	}
	//}
	//ps->sizeof++;
	//ps->a[0]=x;

}
void SeqListPopFront(SeqList* ps)  //头删
{
	assert(ps);
	assert(ps->size > 0);
	SeqListErase(ps, 0); //重调用
}
void SeqListPopBack(SeqList* ps)  //尾删
{
	assert(ps);
	assert(ps->size > 0);
	ps->size--; //删除有效数据量
}


// 顺序表在pos位置插入x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);

	SeqListCheckCapacity(ps);//检查容量

	int end = ps->size - 1;
	while (end >= pos && end >= 0)    //数组在尾部+1个位置
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[pos] = x;
	ps->size++;
}
// 顺序表删除pos位置的值
void SeqListErase(SeqList* ps, size_t pos)
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	if (pos == ps->size - 1)
	{
		ps->size--;
		return;
	}
	else
	{
		int begin = pos + 1;  //防止pos=0时的越界访问
		while (begin < ps->size)
		{
			ps->a[begin - 1] = ps->a[begin];
			begin++;
		}
		ps->size--;
	}
}

// 顺序表查找
int SeqListFind(SeqList* ps, SLDateType x)
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		if (ps->a[i] == x)
			return i;
	}
	return -1;
}

//改数据
void SeqListModify(SeqList* ps, int pos, SLDateType x) //参数pos需要先查找
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	ps->a[pos] = x;
}