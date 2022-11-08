#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

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




//直接插入排序 时间O(N^2) 空间(1) 稳定
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		//[0,end]有序，把end+1位置的值插入，保持有序
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

//希尔排序  时间平均：O(N^1.3）空间(1) 不稳定
// 
// void ShellSort(int* a, int n) // 基础版本
//{
//   // 1、预处理 -- 让整个结构变得更接近有序
//	/*int gap = 3;*/
//
//	/*for (int j = 0; j < gap; ++j) // 有gap组数据
//	{
//		for (int i = j; i < n - gap; i += gap) // 每一组之间的切换
//		{
//			int end = i;
//			int tmp = a[end + gap];
//			while (end >= 0) // 等价于单趟直接插入
//			{
//				if (tmp < a[end])
//				{
//					a[end + gap] = a[end]; // 注意跨度为gap
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = tmp;
//		}
//	}*/    (上面版本有漏洞，但是可以参考数据挪动的思想)
//
//	// gap > 1时是预排序
//	// gap 最后一次等于1，是直接插入排序
//	//PrintArray(a, n);
//
// // 优化后的版本
//	int gap = n;
//	while (gap > 1)
//	{
//		gap = gap / 3 + 1;
//		//gap = gap / 2;
//
//		for (int i = 0; i < n - gap; ++i)
//		{
//			int end = i;
//			int tmp = a[end + gap];
//			while (end >= 0)
//			{
//				if (tmp < a[end])
//				{
//					a[end + gap] = a[end];
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = tmp;
//		}
//
//		//printf("gap:%d->", gap);
//		//PrintArray(a, n);
//	}
//}


// 希尔排序 简化版  gap组数据交替插入排序
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;  // 控制gap最后一次除法能为1
		//gap = gap / 2;

		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}


//选择排序
void SelectSort(int* a, int n)
{

}



//交换
void Swap(int* left, int* right)
{
	assert(left && right);

	int tmp = 0;
	tmp = *left;
	*left = *right;
	*right = tmp;
}

// 堆排序
// 升序 -- 建大堆 (再把堆顶数据向下调整，形成升序)
// 降序 -- 建小堆 （同理）
// 建堆
void AdjustDwon(int* a, int size, int parent)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		// 选出左右孩子中 小/大 的那个
		if (child + 1 < size && a[child + 1] > a[child])
		{
			++child;
		}

		// 孩子跟父亲比较
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
			parent = child;
			child = parent * 2 + 1;
		}
		else
		{
			break;
		}
	}
}
// 排序
void HeapSort(int* a, int n)
{
	// 建堆 O(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)  // i = 最后一个数据的父亲下标
	{
		AdjustDwon(a, n, i);
	}

	// O(N*logN)
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDwon(a, end, 0);  
		--end;
	}
}

//冒泡排序
// 时间复杂度:O（N^2）  最好的情况：O(N)
// 冒泡 对比 插入排序， 插入更好
void BubbleSort(int* a, int n)
{
	assert(a);

	for (int j = 0; j < n - 1; ++j)
	{
		int exchange = 0;
		for (int i = 1; i < n - j; ++i)
		{
			if (a[i - 1] > a[i])
			{
				Swap(&a[i - 1], &a[i]);
				exchange = 1;
			}
		}

		if (0 == exchange)
		{
			break;  // 检查第一次就已经有序
		}

	}
}


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


//快速排序（非递归）
void QuickSortNonR(int* a, int begin, int end)
{}



//计数排序
//统计每个数据出现的次数 (只适用于正负整数)
//时间复杂度 O(max(range, N))
//空间复杂度 O(range)
void CountSort(int* a, int n)
{
	int min = a[0], max = a[0];

	//计数出最大和最小
	for (int i = 1; i < n; ++i)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}

	//统计次数的数组
	int range = max - min + 1;
	int* count = (int*)malloc(sizeof(int*) * range);
	if (count == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	memset(count, 0, sizeof(int) * range);

	//统计次数
	for (int i = 0; i < n; ++i)
	{
		count[a[i] - min]++;
	}

	//回写 - 排序
	int j = 0;
	for (int i = 0; i < range; ++i)
	{
		//出现几次就回写几个i+min
		while (count[i]--)
		{
			a[j++] = i + min;
		}
	}
	free(count);
}



