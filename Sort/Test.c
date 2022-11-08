#define _CRT_SECURE_NO_WARNINGS 1

#include "Sort.h"

int main()
{
	int arr[] = { 2,3,4, 8,9,5, 7,6,1, 0,-1 }; //11
	int size = sizeof(arr) / sizeof(arr[0]);
	PrintArray(arr, size);

	// InsertSort(arr, size); // ≤Â»Î
	// ShellSort(arr, size);  // œ£∂˚
	// SelectSort(arr, size);  // —°‘Ò 
	// HeapSort(arr, size);  // ∂—
	// BubbleSort(arr, size);  // √∞≈›
	// QuickSort(arr, 0, size - 1);  // øÏ≈≈
	// CountSort(arr, size);  // º∆ ˝≈≈–Ú
	
 	PrintArray(arr, size);
	return 0;
 }