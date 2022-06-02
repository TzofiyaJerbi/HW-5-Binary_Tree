#include<stdio.h>
#include"BST.h"
#include"reePrintLibrary.h"
#include <assert.h>
#include <stdlib.h>
#define CHECK_NULL(x) do\
{\
if (x == NULL)\
{\
	printf("Alocation fail\n");\
exit(1);\
}\
}while(0)
void initBST(BST* bst)
{
	bst->root= NULL;
}

TreeNode* createNode()
{

	TreeNode* tree = (TreeNode*)malloc(sizeof(TreeNode));
	CHECK_NULL(tree);
	tree->left = NULL;
	tree->right = NULL;
	return tree;
}
TreeNode* insert(TreeNode* root, TreeNode* newNode)
{
	
	TreeNode* headt = root;
	if (headt == NULL)
	{
		//root = newNode;
		return root;
	}
		
	if (newNode->element <= headt->element)
		if (headt->left == NULL)//?
		{
			//headt->left = newNode;
			return headt->left;
		}
			
		else
			insert(headt->left, newNode);

	if (newNode->element > headt->element) //right subtree (>)
		if (headt->right == NULL)
		{
			//headt->right = newNode;
			return headt->right;
		}
		
			else
		
				insert(headt->right, newNode);
	
}

void insertBST(BST* bst, int value)// נדרש לבדוק האם עובד
{
	TreeNode* leev=createNode();
	BST* headt = bst;
	leev->element = value;
	TreeNode* temp=insert(headt->root, leev); //לאן
	leev = temp;
	
	
}
