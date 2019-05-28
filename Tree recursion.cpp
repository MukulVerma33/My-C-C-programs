#include<iostream>
using namespace std;
class node
{   public:
    int data;
    node *left;
    node *right;
};
class trees
{
    public:
    node *root;
    trees()
    {
        root=NULL;
    }
    node* getnode(int item)
    {
       node* temp=new node;
        temp->data=item;
        temp->left=NULL;
        temp->right=NULL;
        return temp;
    }

    node* insert(node *root,int item)
    {   node *temp;
        if(root==NULL)
        {
            return getnode(item);
        }
        else if(item<root->data)
        root->left=insert(root->left,item);

        else if(item>root->data)
        root->right=insert(root->right,item);

        return root;
    }
    void inorder(node *root)
    {   if(root!=NULL)
        {
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
        }
    }

};
int main()
{
    trees bst;
    int n,data;
    cout<<"enter no. of nodes: ";
    cin>>n;
    cout<<"enter data: ";
    cin>>data;
    bst.root=bst.insert(bst.root,data);
    for(int i=1;i<n;i++)

    {  cout<<"enter data: ";
    cin>>data;
    bst.insert(bst.root,data);
    }

   // bst.disp();
    bst.inorder(bst.root);
   //bst.disp(bst.head);
}
