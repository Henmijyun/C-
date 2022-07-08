#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"


//交换
void Swap(int* left, int* right)
{
	assert(left && right);

	int tmp = 0;
	tmp = *left;
	*left = *right;
	*right = tmp;
}


//插入排序
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n; ++i)
	{
		//[0,end]有序，把end+1位置的值插入，保持有序
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if ()
		}
	}
}

//希尔排序
void ShellSort(int* a, int n);

//选择排序
void SelectSort(int* a, int n);

//堆排序
void HeapSort(int* a, int n);

//冒泡排序
void BubbleSort(int* a, int n);


//快速排序1 hoare版本
int PartSort1(int* a, int begin, int end)
{
	int left = begin;
	int right = end;
	int keyi = left;

	while (left < right)
	{
		//右边先走，找小
		while (left < right && a[right] >= a[keyi])
		{
			--right;
		}

		//左边再走，找大
		while (left < right && a[left] <= a[keyi])
		{
			++left;
		}

		//停下来的位置，进行交换
		Swap(&a[left], &a[right]);
	}

	//改变keyi位置
	Swap(&a[keyi], &a[left]);
	keyi = left;

	return keyi;
}

//挖坑法
int PartSort2(int* a, int begin, int end)
{
	int key = a[begin];
	int piti = begin; //坑位

	while (begin < end)
	{
		//右边找小，填到左边的坑里面，这个位置形成新的坑
		while (begin < end && a[end] >= key)
		{
			--end;
		}

		a[piti] = a[end]; //填原来的坑
		piti = end; //更新坑位

		//左边找大，填到刚更新的右边的坑
		while (begin < end && a[begin] <= key)
		{
			++begin;
		}

		a[piti] = a[begin];
		piti = begin;
	}

	//把最后一个坑填上key
	a[piti] = key;
	return piti;
}

//前后指针 + 三数取中法
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
//快排 - 前后指针法
int PartSort3(int* a, int begin, int end)
{
	int prev = begin;
	int cur = begin + 1;
	int keyi = begin;

	//加入三数取中的优化
	int midi = GetMidIndex(a, begin, end);
	Swap(&a[keyi], &a[midi]);

	while (cur <= end)
	{
		//cur位置的值 小于 prev位置的值 交换
		if (a[cur] < a[keyi] && ++prev != cur)
			Swap(&a[cur], &a[prev]);
		++cur;
	}

	//cur走完了，prev在中间位置
	Swap(&a[keyi], &a[prev]);
	keyi = prev;

	return keyi;
}

//快速排序
void QuickSort(int* a, int begin, int end)
{
	//区间不存在，或者只有一个值，都不需要处理
	if (begin >= end)
	{
		return;
	}

	int keyi = PartSort3(a, begin, end);//单趟排序

	// [begin, keyi-1]  keyi  [keyi+1, end]
	QuickSort(a, begin, keyi - 1);
	QuickSort(a, keyi + 1, end);
}

//打印
void PrintArray(int* a, int size)
{
	assert(a && size != 0);

	for (int i = 0; i < size; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

}



