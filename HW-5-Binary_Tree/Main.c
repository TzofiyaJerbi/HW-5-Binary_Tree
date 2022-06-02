#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"BST.h"
#include "TreePrintLibrary.h"



void main()
{
	int v;
	
	BST NewTree;
	initBST(&NewTree);
	int x =20;
	while (x)
	{

		printf("Enter a Value for the tree \n");
		scanf("%d", &v);
		insertBST(&NewTree, v);
		x--;
	}
	print_ascii_tree(NewTree.root);
	printTreeInorder(&NewTree);
	destroyBST(&NewTree);
	int f = 4;// בשביל ברייק פויינט
}