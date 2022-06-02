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
	initBST(&NewTree);

	while (1)
	{

		printf("Enter a Value for the tree \n");
		scanf("%d", &v);
		insertBST(&NewTree, 5);
	}

}