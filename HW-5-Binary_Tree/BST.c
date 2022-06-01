#include<stdio.h>
#include"BST.h"
#include"reePrintLibrary.h"
#include <assert.h>
#include <stdlib.h>
void initBST(BST* bst)
{
	bst->root= NULL;
}
TreeNode* createNode()
{
	
	TreeNode* tree = (TreeNode*)malloc(sizeof(TreeNode));
	tree->left = NULL;
	tree->right = NULL;
	return tree;
}
void insert(TreeNode* root, TreeNode* newNode)
{
	if (newNode->element <= root->element)
		if (root->element == NULL)
			root->element = newNode;
		else
			insert(root->element, newNode);

	if (newNode->element > root->element) //right subtree (>)
		if (root->right == NULL)
			root->right = newNode;
		else
			insert(root->right, newNode);
}

void insertBST(BST* bst, int value)// נדרש לבדוק האם עובד
{


}
