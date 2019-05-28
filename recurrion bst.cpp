#include<stdio.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
    int data;
    struct node *left, *right;
};

// A utility function to create a new BST node
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

// A utility function to do inorder traversal of BST
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->data);
        inorder(root->right);
    }
}

/* A utility function to insert a new node with given data in BST */
struct node* insert(struct node* node, int data)
{
    /* If the tree is empty, return a new node */
    if (node == NULL)
        return newNode(data);

    /* Otherwise, recur down the tree */
    if (data < node->data)
        node->left  = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);

    /* return the (unchanged) node pointer */
    return node;
}
int main()
{

    struct node *root = NULL;
    int data,n;
    cout<<"Enter the number of nodes :- ";
    cin>>n;
    cout<<"Enter data :- ";
    cin>>data;
    root = insert(root, data);
    for(int i=0;i<n-1;i++)
    {
        cout<<"Enter data :- ";
        cin>>data;
        insert(root, data);
    }

    // print inoder traversal of the BST
    inorder(root);

    return 0;
}
