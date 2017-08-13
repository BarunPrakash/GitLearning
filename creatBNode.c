#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/************************************************************************************/



typedef struct Bnode
{
	int numb;
	struct Bnode *left;
	struct Bnode *right;
}Bnode;
/*************************************************************************************/

int findHeight(struct Bnode *temp);


/***********************************************************************************/

struct Bnode* creatnewNode(int val)
{

	struct Bnode *temp=(struct Bnode*)malloc(sizeof (struct Bnode));
	temp->numb=val;
	temp->left=NULL;
	temp->right=NULL;
	return (temp);
}
void printNode(struct Bnode *temp)
{
	if(!temp)
		return;
	printNode(temp->left);
	printNode(temp->right);
	printf("%d\n",temp->numb);


}
void deleteNode(struct Bnode *temp)
{
	if(!temp)
		return;
	deleteNode(temp->left);
	deleteNode(temp->right);
	free(temp);



}
/**************************************************************/
//searching node!!
void findElement(struct Bnode *temp,int ele)
{
	if(!temp)
		return;
	if(temp->numb==ele)
	{
		printf("found:---%d\n",temp->numb);
		return;
	}
	else if(temp->numb <ele)
	{
		findElement(temp->left,ele);

	}
	else if(temp->numb>ele)
	{
		findElement(temp->right,ele);
	}


}

/**********************************************************/

int findHeight(struct Bnode *temp)
{
	unsigned   int lefth,righth;
	if(!temp)
		return;
	lefth=findHeight(temp->left);
	righth=findHeight(temp->right);
	if(righth<lefth)
		return(righth+1);
	else
		return(lefth+1);
}
/**********************************************************/

int main()
{

	struct Bnode *root=NULL;
	root=creatnewNode(1);
	root->left=creatnewNode(2);
	root->right=creatnewNode(3);
	printNode(root);
	findElement(root,2);
	printf("H---%d\n",findHeight(root));
	deleteNode(root);
	return 1;
	
}










