#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"BST.h"
#include"reePrintLibrary.h"

void main()
{
	BST NewTree;
	TreeNode* node=createNode();

	initBST(&NewTree);
	int x=0;
	insert(node, NewTree.root);
	while (1)
	{

		printf("Enter a Value for the tree \n");
		scanf("%d", &x);
		insertBST(&NewTree, 5);
	}

}