#include<stdio.h>
#include"BST.h"
#include"reePrintLibrary.h"
void initBST(BST* bst)
{
	bst = NULL;
	bst->root->left = NULL;
	bst->root->right = NULL;

}
