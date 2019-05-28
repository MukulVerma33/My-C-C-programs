#include<iostream>
#include<malloc.h>
using namespace std;
class node{
	public:
	int a;
	node *next;
};
class linklist{
	node *head=NULL;
	public:
	void append()
	{
		node *temp;
		temp=new(node);
		cin>>temp->a;
		temp->next=NULL;
		if(head==NULL)
		head=temp;

		else
		{
			node *p=head;
			while(p->next!=NULL)
			p=p->next;
			p->next=temp;
			}
		}
		void display()
		{
			node *p=head;
			while(p!=NULL)
			{cout<<p->a<<"->";
			p=p->next;}
			cout<<endl;
		}
		void middle()
		{
		    node *fast=head,*slow=head;
		    while(fast->next!=NULL&&(fast->next)->next!=NULL)
            {
                slow=slow->next;
                fast=(fast->next)->next;
            }
           cout<<slow->a;
		}
		void reverse_k(int k)
		{
		    node *p=head;
		    for(int i=0;i<k;i++)
                {
                    p=p->next;
                }
            node *current,*prev,*nxt;
                prev=p;
                current=head;
                nxt=current->next;
            while(current!=p)
            {
                current->next=prev;
                prev=current;
                current=nxt;
                if(nxt!=NULL)
                nxt=nxt->next;
            }
            head=prev;
		}
};
int main()
{
	linklist a;
	cout<<"Enter the number of nodes you want to add :- ";
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	a.append();
	a.display();
	cout<<"Enter the nodes to reverse :- ";
	int k;
	cin>>k;
	a.reverse_k(k);
	a.display();
	//a.middle();
}
