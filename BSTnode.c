#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/********************************************************************

Author: Barun Prakash

Purpose: This is ceated for learning purpose under public domain.

Date:    12 Aug 17

Contain : BST creation ,searching,Deleting( Basic operations!!!!!!!!!!!!)

reach Me : embeddedboss@gmail.com 

*********************************************************************/
//define BST node
typedef struct BST
{
	int data;
	struct BST *left;
	struct BST *right;

}BST;

/*******************************************************************/
//creat Node
BST* creatNode(BST *root ,int key)
{
	
	BST *newNode=(BST*)malloc(sizeof(BST));
	newNode->left=NULL;
	newNode->right=NULL;
	newNode->data=key;
	return(newNode);

}
/********************************************************************/

//insert BST
BST* insertBST(BST *root ,int num)
{
	
	if(root==NULL)
		creatNode(root,num);

	if(num<root->data)
		root->left=insertBST(root->left,num);
	if(num>root->data)
		root->right=insertBST(root->right,num);


	return(root);	
}

/************************************************************************/
// print preorder

void printPreOrder(BST *node)
{
	if(!node)
		return;
	printPreOrder(node->left);
	printf("%d",node->data);
	printPreOrder(node->right);


}


/***********************************************************************/


int main()
{
	BST *root=NULL;
	root=insertBST(root,1);
	insertBST(root,2);
insertBST(root,3);
insertBST(root,4);
insertBST(root,5);
insertBST(root,6);
insertBST(root,7);
insertBST(root,8);
insertBST(root,9);
insertBST(root,10);
insertBST(root,11);


	return 0;
}













