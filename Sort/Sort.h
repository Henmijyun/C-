#pragma once

#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//��ӡ
void PrintArray(int* a, int size);

//��������
void InsertSort(int* a, int n);
//ϣ������
void ShellSort(int* a, int n);


//ѡ������
void SelectSort(int* a, int n);

//������
void HeapSort(int* a, int n);

//ð������
void BubbleSort(int* a, int n);


//�������� hoare�汾
int PartSort1(int* a, int begin, int end);
//���������ڿӷ�
int PartSort2(int* a, int begin, int end);
//�������� ǰ��ָ�뷨
int PartSort3(int* a, int begin, int end);
//��������ǰ��ָ�� + ����ȡ�з�
int GetMidIndex(int* a, int begin, int end);
//�������� �ݹ�
void QuickSort(int* a, int begin, int end);
//�������򣨷ǵݹ飩
void QuickSortNonR(int* a, int begin, int end);

//�鲢����
void MergeSort(int* a, int n);

//����
extern int callCount;

//��������


//��������
//ͳ��ÿ�����ݳ��ֵĴ���
void CountSort(int* a, int n);





