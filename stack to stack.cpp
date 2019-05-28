#include<iostream>
using namespace std;
class stack{
    int top;
    int s[10];
public:
    stack()
    {
        top=-1;
    }
    void push(int data)
    {
        top++;
        s[top]=data;
    }
    int pop()
    {
        top--;
        return s[top+1];
    }
    int isEmpty()
    {
        if(top==-1)
            return 1;
        else return 0;
    }
    int peek()
    {
        return s[top];
    }
    void display()
    {
        for(int i=top;i>-1;i--)
            cout<<s[i]<<endl;
    }
};
int main()
{
    stack one,two;
    cout<<"Enter number of elements:- ";
    int n,data;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>data;
        one.push(data);
    }
    while(!one.isEmpty())
    {
        data=one.pop();
        if(two.isEmpty())
            two.push(data);
        else if(data<=two.peek())
                two.push(data);
        else if(data>two.peek())
        {
            while(two.peek()<data&&!two.isEmpty())8
                   one.push(two.pop());
                two.push(data);
        }
    }
    two.display();
}
