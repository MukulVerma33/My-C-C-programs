#include<iostream>
using namespace std;
class Queue{
	int *array;
	int top;
	public:
	Queue()
	{
		array=new int[10];
		top=0;
	}
	void add()
	{
		top++;
		int data;
		cout<<"Enter data:- ";
		cin>>data;
	for(int i=top;i>0;i--)
	array[i+1]=array[i];
	array[1]=data;
	}
	void remove()
	{
		cout<<"The removed data is:- "<<array[top]<<endl; 
		top--;
	}
	void display()
	{
		for(int i=top;i>0;i--)
		cout<<array[i]<<endl;
	}
};

int main()
{ 
Queue ob;
ob.add();
ob.add();
ob.add();
ob.display();
ob.remove();
ob.display();
}

