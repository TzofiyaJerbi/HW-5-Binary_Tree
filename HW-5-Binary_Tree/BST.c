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


TreeNode* insert(TreeNode* root, TreeNode* newNode) //נותן לי כתובת מה צריך לשבת העלה החדש, מקבל עץ ועלה לחיפוש מקומו
{

	

	if (newNode->element <= root->element)
		if (root->left == NULL)//?
		{
			root->left = newNode;
			return root;
		}

		else
			return( insert(root->left, newNode));

	if (newNode->element > root->element) //right subtree (>)
		if (root->right == NULL)
		{
			root->right = newNode;
			return root;
		}

		else

			return( insert(root->right, newNode));

}

void insertBST(BST* bst, int value)// נדרש לבדוק האם עובד
{
	TreeNode* leev = createNode();
	BST* headt = bst;// לשמור ראש העץ
	leev->element = value;
	if (headt->root == NULL)
	{
		headt->root = leev;
	}
	else
	{
	TreeNode* when = insert(headt->root, leev); //לאן
	}
	
}

void printTreeInorder(BST* bst)
{
	if ((bst->root) != NULL)
	
		INprintTreeInorder(bst->root);
	else
	{
		printf("no tree (empti)");
	}

}

void INprintTreeInorder(TreeNode* ToPrint)
{
	if ((ToPrint) != NULL)
	{
		INprintTreeInorder(ToPrint->left);
		printf("%d,", ToPrint->element);
		INprintTreeInorder(ToPrint->right);
	}
}

void destroyBST(BST* bst)
{
	if ((bst->root) != NULL)

		INdestroyBST(bst->root);
	else
	{

		printf("no tree (empti)"); 
	}


}
void INdestroyBST(TreeNode* ToFree)
{
	if ((ToFree->left) != NULL)

		INdestroyBST(ToFree->left);

	else if((ToFree->right) != NULL)
	{
		INdestroyBST(ToFree->right);
	}
	else
	{
		return;
	}
	free(ToFree);
}
