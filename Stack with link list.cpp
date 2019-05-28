#include<iostream>
#include<malloc.h>
using namespace std;
struct Dstack
{
	int data;
	Dstack *next;
};
Dstack *push(Dstack *top)
{
	//for(int i=0;i<n;i++)
	{
	Dstack *temp;
	temp=new(struct Dstack);
	temp->next=NULL;
	cout<<"Enter the data to be pushed:- ";
	cin>>temp->data;
	if(top==NULL)
	top=temp;
	else
	{
		temp->next=top;
		top=temp;
	}
	}
	return top;
}
Dstack *pop(Dstack *top)
{
	Dstack *p=top;
	top=p->next;
	delete p;
	return top;
}
void display(Dstack *top)
{
	struct Dstack *p=top;
	int i=0;
	while(p!=NULL)
	{
		cout<<p->data<<endl;
		p=p->next;
	}
	
}
int main()
{
	Dstack *d=NULL;
	//struct Dstack D;
	//D=create(D);
	/*push(D,10);
	push(D,20);
	push(D,30);
	push(D,40);
	push(D,50);*/
	d=push(d);
	d=push(d);
	display(d);
	d=pop(d);
	display(d);
	//print(D);
	//pop(D);
	//print(D);
	//del(D);
}
