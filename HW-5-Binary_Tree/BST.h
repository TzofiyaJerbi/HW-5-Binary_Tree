﻿#ifndef _BST_ADT_H
#define _BST_ADT_H

typedef struct TreeNode TreeNode;

struct TreeNode
{
    TreeNode* left;
    TreeNode* right;
    int element;
};

typedef struct BST
{
    TreeNode* root;
}BST;
TreeNode* insert(TreeNode* root, TreeNode* newNode);
TreeNode* createNode();//מוסיפה איבר חדש לעץ
void initBST(BST* bst);//מאפסת את העץ
void insertBST(BST* bst, int value);
void printTreeInorder(BST* bst);
void INprintTreeInorder(TreeNode* ToPrint);
void destroyBST(BST* bst);
void INdestroyBST(TreeNode* ToFree);
#endif // !_BST_ADT_H