#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
class node
{ public:
int data;
node *next;
};
void swap_node(node **i,node **j)
{
	
}
class linklist
{  
node *head=NULL;
public:
	void append()
	{ int n;
	cout<<"enter no. of nodes: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		node *temp;
		temp=new node;
		temp->next=NULL;
		cout<<"enter data: ";
		cin>>temp->data;
		if(head==NULL)
			{ 
			head=temp;
			}
		else
		{ 
			node *p=head;
			while(p->next!=NULL)
			{ p=p->next;
			}
			p->next=temp;
		}
	}
}    
   	void display()
    { node *p;
    p=head;
    while(p!=NULL)
    { cout<<p->data<<"->";
    p=p->next;
	}
	cout<<endl;
	}
	void sort()
	{
		node *i=head;
		while(i->next!=NULL)
		{
			node *j=i;
			while(j->next!=NULL)
			{
				if((j->next)->data<(i->next)->data)
				//swap(j->data,i->data);
				swap_node(&j,&i)
				j=j->next;
			}
			i=i->next;
		}
	}
	node **geth()
	{
		return &head;
	}
};
int main()
{ 
linklist l;
l.append();
//l.display();
//l.sort();
//l.display();
swap_node(l.geth());
l.display();
}
