#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"BST.h"
#include "TreePrintLibrary.h"



void main()
{
	int v;
	
	BST NewTree;
	initBST(&NewTree);

	while (1)
	{

		printf("Enter a Value for the tree \n");
		scanf("%d", &v);
		insertBST(&NewTree, v);
	}

}