#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"BST.h"
#include"reePrintLibrary.h"

void main()
{
	int v;
	printf("Ensert Value to tree\n");
	scanf("%d", &v);
	BST NewTree;
	TreeNode* node=createNode();
	initBST(&NewTree);

	insertBST(&NewTree, v);
	insert(NewTree.root, node);
	while (1)
	{

		printf("Enter a Value for the tree \n");
		scanf("%d", &v);
		insertBST(&NewTree, 5);
	}

}