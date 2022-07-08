#pragma once

#include <assert.h>
#include <stdio.h>

//´òÓ¡
void PrintArray(int* a, int size);

//²åÈëÅÅĞò
void InsertSort(int* a, int n);

//Ï£¶ûÅÅĞò
void ShellSort(int* a, int n);

//Ñ¡ÔñÅÅĞò
void SelectSort(int* a, int n);

//¶ÑÅÅĞò
void HeapSort(int* a, int n);

//Ã°ÅİÅÅĞò
void BubbleSort(int* a, int n);

//¿ìËÙÅÅĞò
void QuickSort(int* a, int begin, int end);

//¿ìËÙÅÅĞò£¨·Çµİ¹é£©
void QuickSortNonR(int* a, int begin, int end);

//¹é²¢ÅÅĞò
void MergeSort(int* a, int n);

//ÉùÃ÷
extern int callCount;



