#define _CRT_SECURE_NO_WARNINGS 1

#include "SeqList.h"

void SeqListInit(SeqList* ps) //��ʼ��
{
	assert(ps);
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void SeqListCheckCapacity(SeqList* ps)  //��������ռ�
{
	assert(ps);
	if (ps->size == ps->capacity)
	{
		int newCapacity = ps->capacity == 0 ? 4 : ps->capacity * 2; //�տ�ʼ4������ÿ��*2
		SLDateType* tmp = (SLDateType*)realloc(ps->a, newCapacity * sizeof(SLDateType));
		if (tmp == NULL)
		{
			printf("realloc : fail\n");
			exit(-1);
		}
		//����
		ps->a = tmp;
		tmp = NULL;
		ps->capacity = newCapacity;
	}
}

void SeqListDestroy(SeqList* ps) //����
{
	assert(ps);
	if (ps->a)
	{
		free(ps->a);
		ps->a = NULL;
		ps->size = 0;
		ps->capacity = 0;
		printf("���ٳɹ�\n");
	}

}

void SeqListPrint(SeqList* ps) //��ӡ
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
void SeqListPushBack(SeqList* ps, SLDateType x)  //β��
{
	assert(ps);
	SeqListInsert(ps, ps->size, x); //�ص���
}
void SeqListPushFront(SeqList* ps, SLDateType x)  //ͷ��
{
	assert(ps);
	SeqListInsert(ps, 0, x); //�ص���

	//SeqListCheckCapacity(ps);//�������

	//if (ps->size > 0) //Ų��ͷ����
	//{
	//	int end = ps->size - 1;
	//	while (end >= 0)    //������β��+1��λ��
	//	{
	//		ps->a[end + 1] = ps->a[end];
	//		--end;
	//	}
	//}
	//ps->sizeof++;
	//ps->a[0]=x;

}
void SeqListPopFront(SeqList* ps)  //ͷɾ
{
	assert(ps);
	assert(ps->size > 0);
	SeqListErase(ps, 0); //�ص���
}
void SeqListPopBack(SeqList* ps)  //βɾ
{
	assert(ps);
	assert(ps->size > 0);
	ps->size--; //ɾ����Ч������
}


// ˳�����posλ�ò���x
void SeqListInsert(SeqList* ps, size_t pos, SLDateType x)
{
	assert(ps);
	assert(pos >= 0 && pos <= ps->size);

	SeqListCheckCapacity(ps);//�������

	int end = ps->size - 1;
	while (end >= pos && end >= 0)    //������β��+1��λ��
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}

	ps->a[pos] = x;
	ps->size++;
}
// ˳���ɾ��posλ�õ�ֵ
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
		int begin = pos + 1;  //��ֹpos=0ʱ��Խ�����
		while (begin < ps->size)
		{
			ps->a[begin - 1] = ps->a[begin];
			begin++;
		}
		ps->size--;
	}
}

// ˳������
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

//������
void SeqListModify(SeqList* ps, int pos, SLDateType x) //����pos��Ҫ�Ȳ���
{
	assert(ps);
	assert(pos >= 0 && pos < ps->size);

	ps->a[pos] = x;
}