#include<iostream>
#include<malloc.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
}*head=NULL;
int count=0;
void display()
{
	struct node *p=head;
	int i=0;
	while(p!=NULL)
	{
		cout<<p->data<<" -> ";
		p=p->next;
	}
        cout<<endl;
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
		head=temp;
		else
		{
			struct node *p=head;
			while(p->next!=NULL)
			p=p->next;
			p->next=temp;
		}
		count++;
	}
}
void addAtBegin()
{
	struct node *temp;
	temp=new(struct node);
	temp->next=NULL;
	cout<<"Enter the data you want to add:- ";
	cin>>temp->data;
	temp->next=head;
	head=temp;
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
	while(p->next!=NULL)
	p=p->next;
	p->next=temp;
	count++;
}
void del(int position)
{
	int c=1;
	struct node *p=head;
	struct node *q;
	if(position==1)
	{
		head=p->next;
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
		del(-1);
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
void del_dup()
{
    node *i=head,*j;
    int count=1;
    while(i!=NULL)
    {
        j=i->next;
        int count1=count+1;
        while(j!=NULL)
        {
            if(j->data==i->data)
                {del(count1);
                count1--;
                }
                j=j->next;
                count1++;
        }
        i=i->next;
        count++;
    }
}
int main()
{
	int n;
	cout<<"Enter the number of elements in the list:- ";
	cin>>n;
	makeList(n);
	del_dup();
	display();
}
