#include<iostream>
using namespace std;
class node
{ public:
int data;
node *next;
};
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
	void del_dup()
	{
		node *i,*j,*temp=head;
		int dup=0;
		for(i=head;i!=NULL;i=i->next)
		{
			for(j=i->next;j!=NULL;j=j->next)
			{
				if(i->data+j->data==0)
				{
					dup=dup+2;
					swap(temp->data,i->data);
					temp=temp->next;
					swap(temp->data,j->data);
					temp=temp->next;
				}
			}
		}
		for(int k=0;k<dup;k++)
		{
			temp=head;
			head=temp->next;
			delete(temp);
		}
	}
};
int main()
{
linklist l;
l.append();
l.del_dup();
l.display();
}
