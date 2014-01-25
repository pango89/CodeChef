#include<stdio.h>
#include<math.h>
//A Binary Tree Node
struct node
{
	int data;
	struct node *left, *right;
};
// A utility function to allocate a new tree node
struct node *newNode(int data)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=data;
	temp->left=temp->right=NULL;
	return temp;
}
//function to print the parent of a given node
int printParent(struct node *root,int target)
{
	if(root==NULL) return 0;
	if(root->data==target)
		return 1;
	if(printParent(root->left,target)||printParent(root->right,target))
	{
		printf("%d\n\n",root->data);
		return 1;
	}
	return 0;	
}
int main()
{
	//COMMENT ADDED
	struct node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->right->left = newNode(5);
    root->right->right = newNode(6);
    root->right->left->right = newNode(7);
    root->right->right->right = newNode(8);
    root->right->left->right->left = newNode(9);
    root->right->right->right->right = newNode(10);
    root->right->right->right->right->left = newNode(11);
	
	printParent(root,9);
	return 0;
}
