#include<iostream>
#include<map>
#include<malloc.h>
using namespace std;
map<int,int> HashSum;
map<int,int>::const_iterator it;
struct BinaryTreeNode
{
    int data;
    struct BinaryTreeNode* left;
    struct BinaryTreeNode* right;
};
void verticalSumBinaryTree(struct BinaryTreeNode* root,int column)
{
    if(root==NULL)
        return;
    verticalSumBinaryTree(root->left,column-1);
    int prev_sum=0;//(HashSum.find(column))?0:HashSum.find(column)->second;
    HashSum.insert(make_pair(column,prev_sum+root->data));
    verticalSumBinaryTree(root->right,column+1);
}
struct BinaryTreeNode* newNode (int data)
{
    struct BinaryTreeNode* temp = (struct BinaryTreeNode*) malloc( sizeof(struct BinaryTreeNode) );

    temp->data = data;
    temp->left = temp->right = NULL;

    return temp;
}
int main()
{

    struct BinaryTreeNode *root=newNode(2);
    root->left=newNode(1);
    (root->left)->left=newNode(6);
    (root->left)->right=newNode(7);
    root->right=newNode(3);
    (root->right)->left=newNode(4);
    root->right->left->left=newNode(3);
    root->right->left->left->left=newNode(20);
    root->right->left->left->left->left=newNode(14);
    (root->right)->right=newNode(5);
    root->right->right->left=newNode(10);
    verticalSumBinaryTree(root,0);
    it = HashSum.begin(); // assign it to the start of the vector
    while (it != HashSum.end()) // while it hasn't reach the end
    {
        cout << it->first << "=" << it->second << " "; // print the value of the element it points to
        it++; // and iterate to the next element
    }
    return 0;
}
