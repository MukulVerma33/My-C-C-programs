#include<iostream>
using namespace std;
class node
{   public:
    int data;
    node *left;
    node *right;
};
class tree{
    public:
    node *root;
    tree(){
    root=NULL;}
   void add(int n)
    {
        for(int i=0;i<n;i++)
        {
            node *temp=new node;
            temp->left=temp->right=NULL;
            cout<<"Enter data :- ";
            cin>>temp->data;
            if(root==NULL)
                root=temp;
            else{
                node *parent=root,*current=root;
                while(current)
                {
                    parent=current;
                    if(current->data<temp->data)
                    current=current->right;
                    else{current=current->left;}
                }
                if(parent->data<temp->data)
                parent->right=temp;
                else parent->left=temp;
            }
        }
    }
    void show()
    {
        node *p=root;

    }
};

node* add_recursion(node **root)
{
    node *temp=new node;

}

int main()
{
 tree t;
 t.add(3);
 hello(t.root);
}
