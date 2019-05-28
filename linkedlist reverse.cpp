#include<iostream>
using namespace std;
struct node{
	int data;
	node *next;
};
int count=0;
void create(node **head,int n)
{
	for(int i=0;i<n;i++)
	{
		count++;
		node *temp;
		temp=new node;
		cout<<"Enter data for node "<<i+1<<endl;
		cin>>temp->data;
		temp->next=NULL;
		if(*head==NULL)
		*head=temp;
		else
		{
			node *p=*head;
			while(p->next!=NULL)
			p=p->next;
			p->next=temp;
		}
		
	}
}
void add(node **head)
{
	int loc;
	cout<<"Enter the location of new node:- ";
	cin>>loc;
	node *temp=new node;
	cout<<"Enter the data of node to add"<<endl;
	cin>>temp->data;
	if(loc==1)
	{
		temp->next=*head;
		*head=temp;
	}
	else //if(loc<count)
	{
		node *p=*head;
		int c=1;
		while(c!=loc-1)
		{
			c++;
			p=p->next;
		}
		temp->next=p->next;
		p->next=temp;
	}
}
void display(node **head)
{
	node *p=*head;
	while(p!=NULL)
	{
		cout<<p->data<<" -> ";
		p=p->next;
	}
	cout<<endl;
}
void del(node **head)
{
	count--;
	int loc,c=1;
	cout<<"Enter the location you want to delete:- "<<endl;
	cin>>loc;
	node *p=*head;
	if(loc==1)
	{
		*head=p->next;
		delete p;
	}
	else{
	while(c!=loc-1)
	{
		c++;
		p=p->next;
	}
	node *temp;
	temp=p->next;
	p->next=temp->next;
	delete temp;
	}
}
void frequency(node *head)
{
	cout<<"Enter the number to find:- "<<endl;
	int find;
	cin>>find;
	int c=0;
	node *p=head;
	while(p!=NULL)
	{
		if(p->data==find)
		c++;
		p=p->next;
	}
	cout<<"The frequency of "<<find<<" is "<<c<<endl;
}
void reverse(node **head)
{
	if((*head)->next==NULL);
	else{
	node *current=NULL,*next=NULL,*prev=NULL;
	prev=*head;
	current=prev->next;
	next=current->next;
	prev->next=NULL;
	while(next!=NULL)
	{
		current->next=prev;
		prev=current;
		current=next;
		next=current->next;
	}
	current->next=prev;
	*head=current;}
}
int main()
{
	int n;
	cout<<"Enter the number of elements of the list:- ";
	cin>>n;
	node *head=NULL;
	create(&head,n);
	reverse(&head);
	display(&head);
	frequency(head);
	//add(&head);
	//display(&head);
	//del(&head);
	//display(&head);
}
