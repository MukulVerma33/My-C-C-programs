#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next;
	node()
	{
		next=NULL;
	}
};
class linklist{
	public:
	node *head;
		linklist()
		{
			head=NULL;
		}
	void create()
		{
			int n;
			cout<<"Enter the nodes you want to add:- ";
			cin>>n;
			cout<<endl;
			for(int i=0;i<n;i++)
			{
				node *temp;
				temp=new node;
				cout<<"Enter data for node "<<i+1<<" :- ";
				cin>>temp->data;
				if(head==NULL)
				{
					head=temp;
				}
				else{
					node *p=head;
					while(p->next!=NULL)
					p=p->next;
					p->next=temp;
				}
			}
		}
	void display()
	{
		node *p=head;
		while(p!=NULL)
		{
			cout<<p->data<<"->";
			p=p->next;
		}
		cout<<endl;
	}	
	void create2(linklist L1)
	{
		int n=2;
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			node *temp;
			temp=new node;
			temp->data=((L1.head)->data)+((((L1.head)->next)->next)->data);
			(L1.head)=((L1.head)->next)->next;
			if(head==NULL)
			{
				head=temp;
			}
			else{
				node *p=head;
				while(p->next!=NULL)
				p=p->next;
				p->next=temp;
			}
		}
	}
	void create3(linklist L1)
	{
		(L1.head)=((L1.head)->next);
		int n=2;
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			node *temp;
			temp=new node;
			temp->data=((L1.head)->data)+((((L1.head)->next)->next)->data);
			(L1.head)=((L1.head)->next)->next;
			if(head==NULL)
			{
				head=temp;
			}
			else{
				node *p=head;
				while(p->next!=NULL)
				p=p->next;
				p->next=temp;
			}
		}
	}
	void combine(linklist L1,linklist L2,linklist L3)
	{
		int n=11,mid=(L1.head)->data;
		node *p=L1.head;
		while(p->next!=NULL)
		p=p->next;
		mid=mid+p->data;
		cout<<endl;
		for(int i=0;i<n;i++)
		{
			node *temp;
			temp=new node;
			if(i%2==0){
				temp->data=L1.head->data;
				L1.head=L1.head->next;
			}
			else if(i<4){
				temp->data=L2.head->data;
				L2.head=L2.head->next;
			}
			else if(i>6)
			{
				temp->data=L3.head->data;
				L3.head=L3.head->next;
			}
			else if(i==5)
			{
				temp->data=mid;
			}
			if(head==NULL)
			{
				head=temp;
			}
			else{
				node *p=head;
				while(p->next!=NULL)
				p=p->next;
				p->next=temp;
			}
		}
	}
};
int main()
{
	linklist L1,L2,L3,L;
	L1.create();
	L1.display();
	L2.create2(L1);
	L2.display();
	L3.create3(L1);
	L3.display();
	L.combine(L1,L2,L3);
	L.display();
}
