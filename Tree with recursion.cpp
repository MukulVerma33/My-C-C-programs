#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *left;
    node *right;
};
node *getnode(int data)
    {
        node *temp=new node;
        temp->data=data;
        temp->left=temp->right=NULL;
        return temp;
    }
node* Ins(node *root,int data)
    {
        if(root==NULL){
            root=getnode(data);
        }
        else if(data<=root->data)
             root->left=Ins(root->left,data);
        else root->right=Ins(root->right,data);
        return root;
    }
void Search(node *root,int data)
{
    if(root==NULL)
        cout<<"Not Found!!"<<endl;
    else if(data==root->data)
        cout<<"Got It!!"<<endl;
    else if(data<root->data)
        Search(root->left,data);
    else Search(root->right,data);
}
node* del(node *root,int data)
{
    if(root==NULL)
        {
            cout<<"Data Not Found!!"<<endl;
            return root;
        }
    else if(root->data==data)
    {
        if(root->left==NULL)
        {
            node *temp=root->left;
            delete root;
            cout<<"Delete Successful!!"<<endl;
            return temp;
        }
        else if(root->right==NULL)
        {
            node *temp=root->right;
            delete root;
            cout<<"Delete Successful!!"<<endl;
            return temp;
        }
        else {
            node *p=root;
            while(p->right->right!=NULL)
                p=p->right;
            root->data=p->right->data;
            delete p->right->right;
            p->right=NULL;
            cout<<"Delete Successful!!"<<endl;
            return root;
        }
    }
    else if(data>root->data)
        root->right=del(root->right,data);
    else root->left=del(root->left,data);
    return root;
}
node* inorder(node *root)
{
    if(root==NULL)
        return root;
    inorder(root->left);cout<<root->data<<" ";inorder(root->right);
}
class stack{
    node* s[50];
    int top;
public:
    stack()
    {
        top=-1;
    }
    void push(node* data)
    {
        top=top+1;
        s[top]=data;
    }
    node* pop()
    {
        top--;
        return(s[top+1]);
    }
    int isEmpty()
    {
        if(top==-1)
            return 1;
        else return 0;
    }
};

void inorder_loop(node *root)
{
    stack s;
    node *curr = root;

    while (curr != NULL || s.isEmpty() == false)
    {
        while (curr !=  NULL)
        {
            s.push(curr);
            curr = curr->left;
        }

        curr = s.pop();
        cout << curr->data << " ";
        curr = curr->right;

    }
}
int main()
{
    node *root=NULL;
    root=Ins(root,20);
    root=Ins(root,10);
    root=Ins(root,30);
    root=Ins(root,40);
    root=Ins(root,60);
    root=Ins(root,50);
    root=Ins(root,70);
    root=Ins(root,25);
    root=Ins(root,35);
   /* root=del(root,27);
    Search(root,25);*/
    inorder_loop(root);
    //cout<<root->left->data<<endl<<root->data<<endl<<root->right->data;


}
