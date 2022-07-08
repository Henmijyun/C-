#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"


//����
void Swap(int* left, int* right)
{
	assert(left && right);

	int tmp = 0;
	tmp = *left;
	*left = *right;
	*right = tmp;
}


//��������
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		//[0,end]���򣬰�end+1λ�õ�ֵ���룬��������
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if ()
		}
	}
}

//ϣ������
void ShellSort(int* a, int n);

//ѡ������
void SelectSort(int* a, int n);

//������
void HeapSort(int* a, int n);

//ð������
void BubbleSort(int* a, int n);


//��������1 hoare�汾
int PartSort1(int* a, int begin, int end)
{
	int left = begin;
	int right = end;
	int keyi = left;

	while (left < right)
	{
		//�ұ����ߣ���С
		while (left < right && a[right] >= a[keyi])
		{
			--right;
		}

		//������ߣ��Ҵ�
		while (left < right && a[left] <= a[keyi])
		{
			++left;
		}

		//ͣ������λ�ã����н���
		Swap(&a[left], &a[right]);
	}

	//�ı�keyiλ��
	Swap(&a[keyi], &a[left]);
	keyi = left;

	return keyi;
}

//�ڿӷ�
int PartSort2(int* a, int begin, int end)
{
	int key = a[begin];
	int piti = begin; //��λ

	while (begin < end)
	{
		//�ұ���С�����ߵĿ����棬���λ���γ��µĿ�
		while (begin < end && a[end] >= key)
		{
			--end;
		}

		a[piti] = a[end]; //��ԭ���Ŀ�
		piti = end; //���¿�λ

		//����Ҵ���ո��µ��ұߵĿ�
		while (begin < end && a[begin] <= key)
		{
			++begin;
		}

		a[piti] = a[begin];
		piti = begin;
	}

	//�����һ��������key
	a[piti] = key;
	return piti;
}

//ǰ��ָ�� + ����ȡ�з�
int GetMidIndex(int* a, int begin, int end)
{
	int mid = (begin + end) >> 1;
	if (a[begin] < a[mid])
	{
		if (a[mid] < a[end])
			return mid;
		else if (a[begin] < a[end])
			return end;
		else
			return begin;
	}
	else // (a[begin] >= a[mid])
	{
		if (a[mid] > a[end])
			return mid;
		else if (a[begin] < a[end])
			return begin;
		else
			return end;
	}
}
//���� - ǰ��ָ�뷨
int PartSort3(int* a, int begin, int end)
{
	int prev = begin;
	int cur = begin + 1;
	int keyi = begin;

	//��������ȡ�е��Ż�
	int midi = GetMidIndex(a, begin, end);
	Swap(&a[keyi], &a[midi]);

	while (cur <= end)
	{
		//curλ�õ�ֵ С�� prevλ�õ�ֵ ����
		if (a[cur] < a[keyi] && ++prev != cur)
			Swap(&a[cur], &a[prev]);
		++cur;
	}

	//cur�����ˣ�prev���м�λ��
	Swap(&a[keyi], &a[prev]);
	keyi = prev;

	return keyi;
}

//��������
void QuickSort(int* a, int begin, int end)
{
	//���䲻���ڣ�����ֻ��һ��ֵ��������Ҫ����
	if (begin >= end)
	{
		return;
	}

	int keyi = PartSort3(a, begin, end);//��������

	// [begin, keyi-1]  keyi  [keyi+1, end]
	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}

//��ӡ
void PrintArray(int* a, int size)
{
	assert(a && size != 0);

	for (int i = 0; i < size; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}



