#include <iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *root=NULL;
int c=0;
void append(int n)
{	int i;
	for(i=0;i<n;i++)
	{
	struct node *temp;
	temp=new(struct node);
	cout<<"enter the data for node "<<i+1<<endl;
	cin>>temp->data;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	{
	root=temp;
	}
	else{
		struct node *p;
		p=root;
		while(p->right!=NULL)
		{
			p=p->right;
		}
		p->right=temp;
		temp->left=p;
		}
	}
}

void display()
{
		struct node *p;
	//	p=root;
		for(p=root;p!=NULL;p=p->right)       //for loop
		{
			cout<<p->data<<"->";
		//	p=p->right;
		}
	/*	while(p!=NULL)						//while loop varient
		{	 
			cout<<p->data<<"->";
			p=p->right;
		}*/
		cout<<endl;
}
int main()
{
append(3);
display();
}

