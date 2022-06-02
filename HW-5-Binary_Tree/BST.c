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

	//TreeNode* headt = root;// יכול להיות מחוץ לפונקציה
	//if (root == NULL)
	//{
	//	//root = newNode;
	//	return &root;
	/*}*/

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
	//when->left = leev;
	}
	


}
