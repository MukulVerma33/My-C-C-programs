#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *link;
};
class Queue{
	node *front;
//	node *back;
	public:
	Queue()
	{
		front=NULL;
//		back=NULL;
	}
	void add()
	{
		node *temp;
		temp=new node;
		cout<<"Enter data:- ";
		cin>>temp->data;
		temp->link=NULL;
		if(front==NULL)
		{
			front=temp;
	//		back=temp->link;
		}
		else{
	//		back=temp;
	//		back=temp->link;
	node *p=front;
	while(p->link!=NULL)
	p=p->link;
	p->link=temp;
		}
	}
	void display()
	{
		node *p=front;
		cout<<"The queue is:-"<<endl;
		while(p!=NULL)
		{
			cout<<p->data<<endl;
			p=p->link;
		}		
	}
	void remove()
	{
		cout<<"The removed data is:- "<<front->data<<endl;
		front=front->link;
	}		
};
int main()
{ 
Queue ob;
ob.add();
ob.add();
ob.display();
ob.remove();
ob.remove();
}

