//////////////////////////////////////////////////////////////////////

// CE1007/CZ1007 Data Structures
// Week 13 Lab and Tutorial - Binary Search Tree

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////

typedef struct _btnode{
int item;
struct _btnode *left;
struct _btnode *right;
} BTNode;

///////////////////////////////////////////////////////////////////////

void insertBSTNode(BTNode **node, int value);
void printBSTInOrder(BTNode *node);
int isBST(BTNode *node, int min, int max);
BTNode *removeBSTNode(BTNode *node, int value);
BTNode *findMin(BTNode *p);

///////////////////////////////////////////////////////////////////////

int main(){
	int i=0;

	BTNode *root=NULL;

	//question 1
	do{
		printf("input a value you want to insert(-1 to quit):");

		scanf("%d",&i);
		if (i!=-1)
			insertBSTNode(&root,i);
	}while(i!=-1);

	//question 2
	printBSTInOrder(root);
	printf("\n");

	//question 3
	if ( isBST(root,-1000000, 1000000)==1)
		printf("It is a BST!\n");
	else
		printf("It is not a BST!\n");

	//question 4
	do{
		printf("\ninput a value you want to remove(-1 to quit):");
		scanf("%d",&i);
		if (i!=-1)
		{
			root=removeBSTNode(root,i);
			printBSTInOrder(root);
		}
	}while(i!=-1);


	return 0;
}

//////////////////////////////////////////////////////////////////////

void insertBSTNode(BTNode **node, int value)
{
	BTNode *add;
	add = malloc(sizeof(BTNode));
	add->item=value;
	add->left = add->right = NULL;

	if (*node==NULL)
        *node = add;
    else
    {
        if (value<(*node)->item)
            insertBSTNode(&(*node)->left,value);
        else if (value>(*node)->item)
            insertBSTNode(&(*node)->right,value);
        else
            printf("Already exist in BST. \n");
    }
}

//////////////////////////////////////////////////////////////////////

void printBSTInOrder(BTNode *node) //ascending order
{
	if (node!=NULL)
	{
	    printBSTInOrder(node->left);
	    printf("%d ",node->item);
	    printBSTInOrder(node->right);
	}
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int isBST(BTNode *node, int min, int max) // the item stored in node has to be smaller than max and larger than min
{
	if (node==NULL)
        return 1; //an empty tree is BST
    if (node->item<=min || node->item >= max)
        return 0; //the node's value should belong to (min,max)
    return isBST(node->left, min, node->item) && isBST(node->right,node->item, max);
    //can do l = isBST(...); r = isBST(...); return l && r;
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BTNode *removeBSTNode(BTNode *node, int value)
//if pass in *root rather than address of *root (i.e. **root), need to root = (removeBTNode(root,C);
//if void function use **node, if(*node==NULL)... etc. all node change to *node, **node change to &((*node)->right)
{
	BTNode *temp;

	if (node==NULL)
    {
        printf("Value not found in BST!\n");
        return NULL; //or return node;
    }
    if (value< node->item)
        node->left = removeBSTNode(node->left,value);
    else if (value>node->item)
        node->right = removeBSTNode(node->right,value);
    else //found the node to be removed
    {
        if (node->left!=NULL && node->right !=NULL)
        {
            temp = findMin(node->right);
            node->item = temp->item;
            node->right = removeBSTNode(node->right,temp->item);
        }
        else //has <=1 child node
        {
            temp = node;
            if(node->left==NULL)
                node = node->right;
            else
                node = node->left;
            free(temp);
        }
    }
    return node;
}

BTNode *findMin(BTNode *p)
{
    if (p==NULL)
        return NULL;
    while (p->left!=NULL) //move p leftwards until
        p = p->left;      //it is the left most node

    return p;

    /*
    recursive
    if(p==NULL)
        return NULL;
    if (p->left==NULL)
        return p;
    return findMin(p->left);
    */
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
