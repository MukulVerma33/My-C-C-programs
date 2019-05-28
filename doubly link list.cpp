#include<iostream>
using namespace std;
struct node
{
int data;
struct node *Llink;
struct node *Rlink;	
}*head=NULL;
int count=0;
void makeList(int n)
{
	struct node *temp;
	for(int i=0;i<n;i++)
	{
		count++;
		temp=new(struct node);
		temp->Llink=NULL;
		temp->Rlink=NULL;
		cout<<"Enter the data for node "<<i+1<<":- ";
		cin>>temp->data;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		struct node *p=head;
		while(p->Rlink!=NULL)
		p=p->Rlink;
		p->Rlink=temp;
		temp->Llink=p;
	}
	}
}
void addAtBegin()
{count++;
	struct node *temp;
	temp=new(struct node);
	temp->Llink=NULL;
	temp->Rlink=NULL;
	cout<<"Enter the data:- ";
	cin>>temp->data;
	temp->Rlink=head;
	head=temp;
}
void addInBetween(int position)
{count++;
	struct node *temp,*p=head;
	int c=1;
	temp=new(struct node);
	temp->Llink=NULL;
	temp->Rlink=NULL;
	cout<<"Enter the data:- ";
	cin>>temp->data;	
	while(c<position-1)
	{
		p=p->Rlink;
		c++;
	}
	temp->Rlink=p->Rlink;
	p->Rlink=temp;
	temp->Llink=p;
	p->Rlink->Llink=temp;
}
void addAtEnd()
{count++;
	struct node *temp,*p=head;
	temp=new(struct node);
	temp->Llink=NULL;
	temp->Rlink=NULL;
	cout<<"Enter the data:- ";
	cin>>temp->data;	
	while(p->Rlink!=NULL)
		p=p->Rlink;
	p->Rlink=temp;
	temp->Llink=p;	
}
void del()
{
	int position,c;
	c=1;
	cout<<"Enter the position to delete:- ";
	cin>>position;
	struct node *p=head;
	struct node *q,*r;
	if(position==1)
	{
		head=p->Rlink;
		//p->Rlink->Llink=NULL;
		head->Llink=NULL;
		delete p;
	}
	else
	{
	while(c<position-1)
		{
			p=p->Rlink;
			c++;
		}
	q=p->Rlink;
	r=q->Rlink;
	if(position!=count)
	r->Llink=p;
	p->Rlink=q->Rlink;
	delete q;
	}
	count--;
}
void display()
{
	struct node *p=head;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->Rlink;
	}
}
void add()
{
	int position=33;
	while(position!=0)
	{
	cout<<"To add a node enter position\nTo delete an element enter -1\nTo exit enter 0\n ";
	cin>>position;
	if(position!=0)
	{
	if(position==1)
	{
	addAtBegin();
	display();
	}
	else if(position==-1)
	{
		del();
		display();
	}
	else if(position<=count)
	{
	addInBetween(position);
	display();
	}
	else if(position==count+1)
	{
	addAtEnd();
	display();
	}
	}
	}
}
int main()
{
	makeList(3);
	display();
	add();
	cout<<count;
}
