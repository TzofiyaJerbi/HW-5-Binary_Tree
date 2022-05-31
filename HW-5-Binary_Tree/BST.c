#include<stdio.h>
#include"BST.h"
#include"reePrintLibrary.h"
#include <assert.h>
void initBST(BST* bst)
{
	bst->root = (TreeNode*)malloc(sizeof(TreeNode));//מבצע הקצאה לתחילת מצביע של עץ מנהל
	assert(bst->root);
	bst->root->left = NULL;
	bst->root->right = NULL;

}

void insertBST(BST* bst, int value)// נדרש לבדוק האם עובד
{
	if (bst->root->element <= value)
		if (bst->root->left == NULL)
			bst->root->left = bst->root;
		else
			insertBST(bst->root->left, value);
	if (bst->root->element > value)
		if (bst->root->right == NULL)
			bst->root->right = bst->root;
		else
			insertBST(bst->root->right, value);

}
