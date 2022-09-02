#pragma once

#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

//�������ṹ
typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;

BTNode* BuyNode(BTDataType x); //�½�һ���ڵ�
void PreOrder(BTNode* root); //��������ǰ�����
void InOrder(BTNode* root); //�������
void PostOrder(BTNode* root); //�������
int TreeSize(BTNode* root);  //�ڵ�����
int TreeLeafSize(BTNode* root); //Ҷ�ӽڵ������
int TreeKLevel(BTNode* root, int k); //��k�� �ڵ�ĸ���(k >= 1)
BTNode* TreeFind(BTNode* root, BTDataType x); //����������ֵΪx�Ľڵ�
int TreeDepth(BTNode* root); //�����ĸ߶�

