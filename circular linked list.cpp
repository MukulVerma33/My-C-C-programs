#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*head=NULL;
int count=0;
/*void makeList(int n)
{
	struct node* temp;
	//temp=(struct node*)malloc(sizeof(struct node));
	temp=new(struct node);
	cout<<"enter data:- ";
	cin>>temp->data;
	temp->next=NULL;
if(count==0)
{
		head=temp;
		count++;
	}	
	else if(position!=count)
	{
		struct node *p=head;
		int x=0;
		while(x!=position-1)
		{
			p=p->next;
			x++;
		}
	temp->next=p->next;
		p->next=temp;
		count++;	
	}
	else if(position==count)
	{
		struct node *p=head;
		while(p->next!=NULL)
		p=p->next;
		p->next=temp;
		temp->next=NULL;
		count++;				
	}
	
}*/
void display()
{
	struct node *p=head;
	int i=0;
	while(p->next!=head)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	cout<<p->data<<endl;
		
	/*do{
		cout<<p->data<<endl;					//do while varient
		p=p->next;
	}while(p->next!=head);*/
}
void makeList(int n)
{
	struct node *temp;
	for(int i=0;i<n;i++)
	{
		temp=new(struct node);
		temp->next=NULL;
		cout<<"Enter the data for node "<<i+1<<":- ";
		cin>>temp->data;
		if(head==NULL)
		{head=temp;
		temp->next=head;}
		else 
		{
			struct node *p=head;
			while(p->next!=head)
			p=p->next;
			p->next=temp;
			temp->next=head;
		}
		count++;
	}
}
void addAtBegin()
{
	struct node *temp,*p=head;
	temp=new(struct node);
	temp->next=NULL;
	cout<<"Enter the data you want to add:- ";
	cin>>temp->data;
	temp->next=head;
	while(p->next!=head)
	p=p->next;
	head=temp;	
	p->next=head;
	count++;
}
void addInBetween(int position)
{
	struct node *temp;
	temp=new(struct node);
	temp->next=NULL;
	cout<<"Enter the data:- ";
	cin>>temp->data;
	struct node *p=head;
	int c=1;
	while(c<position-1)
	{
	p=p->next;
	c++;
	}
	temp->next=p->next;
	p->next=temp;
	count++;
}
void addAtEnd()
{
	struct node *temp;
	temp=new(struct node);
	temp->next=NULL;
	cout<<"Enter the data:- ";
	cin>>temp->data;
	struct node *p=head;
	while(p->next!=head)
	p=p->next;
	p->next=temp;
	temp->next=head;	
	count++;
}
void del()
{
	int position,c=1;
	cout<<"Enter the position to delete:- ";
	cin>>position;
	struct node *p=head;
	struct node *q=head;
	if(position==1)
	{
		while(q->next!=head)
		q=q->next;
		head=p->next;
		q->next=head;
		delete p;
	}
	else{
	while(c<position-1)
	{
		p=p->next;
		c++;
	}
	q=p->next;
	p->next=q->next;
	delete q;}
	
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
	int n;
	cout<<"Enter the number of elements in the list:- ";
	cin>>n;
	makeList(n);
	display();
	add();
	
}
