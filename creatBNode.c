#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdint.h>
/**********************************************************************/
typedef struct  {

	unsigned short int data;
	struct Btree *left;
	struct Btree *right;
}Btree;

/*******************************************************************/
// create Node


Btree*  creatNode(int inumb)
{
	Btree *newNode=(Btree*)malloc(sizeof(Btree));
	newNode->data=inumb;
	newNode->left=NULL;
	newNode->right=NULL;
	return(newNode);

}

/***************************************************************************
//disp
void dispNode(struct Btree *temp)
{
	if(temp==NULL)
		return ;
	dispNode(temp->left);
	dispNode(temp->right);
	printf("%d",temp->data);	

}**************************/
void printPostorder(Btree  *node)
{
     if (node == NULL)
        return;
 
     // first recur on left subtree
     printPostorder(node->left);
 
     // then recur on right subtree
     printPostorder(node->right);
 
     // now deal with the node
     printf("%d ", node->data);
}
/***********************************************************************/
int main()
{
	Btree *node=NULL;
	node=creatNode(1);
//	node->left=creatNode(2);
//	node->right=creatNode(3);
//	node->left->left=creatNode(4);
//	node->left->right=creatNode(5);
//	node->right->left=creatNode(6);
///	node->right->right=creatNode(7);
	printf("HI");
	return 1;

}










