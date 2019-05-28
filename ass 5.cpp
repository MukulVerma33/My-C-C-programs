#include<iostream>
using namespace std;
class stack{
int *s;
int top;
public:
    stack(){
    s= new int[100];
    top=-1;
    }
    void push(int value)
    {
     top++;
     s[top]=value;
    }
    int pop()
    {
        int val=s[top];
        top--;
        return val;
    }
    void show()
    {
        for(int i=top;i>-1;i--)
            cout<<s[i]<<endl;
    }
};
class queue{
  public:
       int *q;
    int front,rear;
   queue()
    {
        front=-1;
        rear=-1;
        q=new int[100];
    }
    void enque(int value)
    {
        if(front==-1)
            front++;
        rear++;
        q[rear]=value;
    }
   int deque()
   {
       front++;
       return(q[front-1]);
   }
   void display()
   {
       for(int i=front;i<rear+1;i++)
        cout<<q[i]<<" ";
   }
};
void reverse(int k,queue q)
{
    stack s;
    for(int i=0;i<k;i++)
    {
        s.push(q.deque());
    }
    for(int i=0;i<k;i++)
    q.q[i]=s.pop();
    q.front=0;
    q.display();
    cout<<endl;
}
int main()
{
queue q;
for(int i=0;i<5;i++)
    q.enque(i+1);
//q.display();
cout<<endl;
reverse(3,q);

}
