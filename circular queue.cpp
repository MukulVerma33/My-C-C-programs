#include<iostream>
using namespace std;
struct cq{
	int front,rear,*a;
};
cq *create(cq **ob)
{
//	cq *ob;
	*ob=new cq;
	(*ob)->a=new int[10];
	(*ob)->front=(*ob)->rear=-1;
//	return *ob;
}
void push(cq *ob,int value)
{
		if(ob->front>0&&ob->rear==9)
	{
		ob->rear=-1;
	}
	if(ob->rear==9)
	{
		cout<<"Queue full"<<endl;
		return;
	}
	if(ob->rear==ob->front-1)
	{
		cout<<"Queue full"<<endl;
		return;		
	}
	if(ob->front==-1)
	ob->front++;
	ob->rear++;
//	cout<<"rear value:- "<<ob->rear<<endl;
	ob->a[ob->rear]=value;
}
void pop(cq *ob)
{
	if(ob->rear==-1)
	{
		cout<<"Queue empty"<<endl;
		return;
	}
	cout<<"The popped element is :- "<<ob->a[ob->front]<<endl;
	if(ob->front==9)
	ob->front=0;
	else ob->front++;
}
void display(cq *ob)
{
	int i=ob->front,count=0;
	while(count!=10&&i-1!=ob->rear)
	{
		cout<<ob->a[i]<<endl;
		count++;
		i++;
		//if(count==10)
		//return;
		if(i==10)
		i=0;
		
	}
}
int main()
{
cq *ob;
create(&ob);
push(ob,1);
push(ob,2);
push(ob,3);
push(ob,4);
push(ob,5);
push(ob,6);
push(ob,7);
push(ob,8);
push(ob,9);
push(ob,10);
display(ob);
pop(ob);
pop(ob);
pop(ob);
display(ob);
//push(ob,90);

//push(ob,33);
//cout<<ob->front;
}

