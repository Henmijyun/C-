#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

int main()
{
	int arr[] = { 2,3,4,8,9,5,7,6,1,0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, size);

	QuickSort(arr, 0, size - 1);
	PrintArray(arr, size);
	return 0;
 }