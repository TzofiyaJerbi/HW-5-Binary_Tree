#include<stdio.h>
#include"BST.h"
#include"reePrintLibrary.h"
#include <assert.h>
#include <stdlib.h>
//#define CHECK_NULL(x)	if ((x) == NULL) }printf("Allocation Fail\n")// exit(1)}
void initBST(BST* bst)
{
	bst->root= NULL;
}

TreeNode* createNode()
{

	TreeNode* tree = (TreeNode*)malloc(sizeof(TreeNode));
	if (tree == NULL)exit(1);
	tree->left = NULL;
	tree->right = NULL;
	return tree;
}
TreeNode* insert(TreeNode* root, TreeNode* newNode)
{
	
	if (root == NULL)
		root = newNode;

	if (newNode->element <= root->element)
	{


		if (root->left == NULL)//?
		{
			root->left = newNode;
			return newNode;
		}
			
		
			

		else
			insert(root->left, newNode);
	}
	else
	{


		//if (newNode->element > root->element) //right subtree (>)
		if (root->right == NULL)
		{
			root->right = newNode;
			return newNode;
		}	
			else
				insert(root->right, newNode);
	}
}

void insertBST(BST* bst, int value)// נדרש לבדוק האם עובד
{
	TreeNode* leev=createNode();
	leev->element = value;
	insert(bst->root, leev);

}
