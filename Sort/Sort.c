#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

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




//ֱ�Ӳ������� ʱ��O(N^2) �ռ�(1) �ȶ�
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; ++i)
	{
		//[0,end]���򣬰�end+1λ�õ�ֵ���룬��������
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

//ϣ������  ʱ��ƽ����O(N^1.3���ռ�(1) ���ȶ�
// 
// void ShellSort(int* a, int n) // �����汾
//{
//   // 1��Ԥ���� -- �������ṹ��ø��ӽ�����
//	/*int gap = 3;*/
//
//	/*for (int j = 0; j < gap; ++j) // ��gap������
//	{
//		for (int i = j; i < n - gap; i += gap) // ÿһ��֮����л�
//		{
//			int end = i;
//			int tmp = a[end + gap];
//			while (end >= 0) // �ȼ��ڵ���ֱ�Ӳ���
//			{
//				if (tmp < a[end])
//				{
//					a[end + gap] = a[end]; // ע����Ϊgap
//					end -= gap;
//				}
//				else
//				{
//					break;
//				}
//			}
//			a[end + gap] = tmp;
//		}
//	}*/    (����汾��©�������ǿ��Բο�����Ų����˼��)
//
//	// gap > 1ʱ��Ԥ����
//	// gap ���һ�ε���1����ֱ�Ӳ�������
//	//PrintArray(a, n);
//
// // �Ż���İ汾
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


// ϣ������ �򻯰�  gap�����ݽ����������
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;  // ����gap���һ�γ�����Ϊ1
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


//ѡ������
void SelectSort(int* a, int n)
{

}



//����
void Swap(int* left, int* right)
{
	assert(left && right);

	int tmp = 0;
	tmp = *left;
	*left = *right;
	*right = tmp;
}

// ������
// ���� -- ����� (�ٰѶѶ��������µ������γ�����)
// ���� -- ��С�� ��ͬ��
// ����
void AdjustDwon(int* a, int size, int parent)
{
	int child = parent * 2 + 1;
	while (child < size)
	{
		// ѡ�����Һ����� С/�� ���Ǹ�
		if (child + 1 < size && a[child + 1] > a[child])
		{
			++child;
		}

		// ���Ӹ����ױȽ�
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
// ����
void HeapSort(int* a, int n)
{
	// ���� O(N)
	for (int i = (n - 1 - 1) / 2; i >= 0; --i)  // i = ���һ�����ݵĸ����±�
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

//ð������
// ʱ�临�Ӷ�:O��N^2��  ��õ������O(N)
// ð�� �Ա� �������� �������
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
			break;  // ����һ�ξ��Ѿ�����
		}

	}
}


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


//�������򣨷ǵݹ飩
void QuickSortNonR(int* a, int begin, int end)
{}



//��������
//ͳ��ÿ�����ݳ��ֵĴ��� (ֻ��������������)
//ʱ�临�Ӷ� O(max(range, N))
//�ռ临�Ӷ� O(range)
void CountSort(int* a, int n)
{
	int min = a[0], max = a[0];

	//������������С
	for (int i = 1; i < n; ++i)
	{
		if (a[i] > max)
			max = a[i];
		if (a[i] < min)
			min = a[i];
	}

	//ͳ�ƴ���������
	int range = max - min + 1;
	int* count = (int*)malloc(sizeof(int*) * range);
	if (count == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	memset(count, 0, sizeof(int) * range);

	//ͳ�ƴ���
	for (int i = 0; i < n; ++i)
	{
		count[a[i] - min]++;
	}

	//��д - ����
	int j = 0;
	for (int i = 0; i < range; ++i)
	{
		//���ּ��ξͻ�д����i+min
		while (count[i]--)
		{
			a[j++] = i + min;
		}
	}
	free(count);
}



