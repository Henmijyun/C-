#pragma once

#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

//二叉树结构
typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType _data;
	struct BinaryTreeNode* _left;
	struct BinaryTreeNode* _right;
}BTNode;

BTNode* BuyNode(BTDataType x); //新建一个节点
void PreOrder(BTNode* root); //二叉树的前序遍历
void InOrder(BTNode* root); //中序遍历
void PostOrder(BTNode* root); //后序遍历
int TreeSize(BTNode* root);  //节点数量
int TreeLeafSize(BTNode* root); //叶子节点的数量
int TreeKLevel(BTNode* root, int k); //第k层 节点的个数(k >= 1)
BTNode* TreeFind(BTNode* root, BTDataType x); //二叉树查找值为x的节点
int TreeDepth(BTNode* root); //求树的高度

