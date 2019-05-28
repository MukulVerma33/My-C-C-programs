#include<iostream>
using namespace std;
//int top=0;
int max=100;
struct stack
{
	int s[max];
	int top;
	int size;
};
stack S;
int IsEmpty()//stack *S)
{
	if(S.top==0)
	return 1;
	else return 0;
}
void push(int value)//stack *S,int value)
{
	S.top++;
	S.s[S.top]=value;
}
void pop()//stack *S)
{
	if(IsEmpty())//S))
	cout<<"error"<<endl;
	else
	{
	cout<<S.s[S.top];
	S.top--;
	}
}
void print()//stack *S)
{
	for(int i=S.size;i>0;i--)
	cout<<S.s[i]<<endl;
}
int main()
{
	//stack A;
	S.top=0;
	S.size=5;
	push(1);
	push(2);
	push(3);
	push(4);
	push(5);//&A,100);
	/*push(&A,200);
	push(&A,300);
	push(&A,400);
	push(&A,500);*/
	cout<<S.top<<endl;
	print();
	pop();
	
  }  
