#include<iostream>
#include <string.h>
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
class stack_c{
    public:
char *s;
int top;
    stak_c(){
    s= new char[100];
    top=-1;
    }
    void push(char value)
    {
     top++;
     s[top]=value;
    }
    char pop()
    {
        char val=s[top];
        top--;
        return val;
    }
    void show()
    {
        for(int i=top;i>-1;i--)
            cout<<s[i]<<endl;
    }
};
int eval_postfix(){
    string exp;
    stack ans;
    cout<<"Enter the postfix expression:- "<<endl;
    getline(cin,exp);
    for(int i=0;exp[i];i++)
    {   if(exp[i]==' ') continue;
        else if(isdigit(exp[i]))
    {
        int num=0;
        while(isdigit(exp[i]))
        {
            num=num*10+(int)(exp[i]-'0');
            i++;
        }
        i--;
        ans.push(num);
    }

    else{
        int value1=ans.pop();
        int value2=ans.pop();
        switch(exp[i])
        {
            case '+':
                    ans.push(value2+value1);
                    break;
                case '-':
                    ans.push(value2-value1);
                    break;
                case '*':
                    ans.push(value2*value1);
                    break;
                case '/':
                    ans.push(value2/value1);
                    break;
        }
    }
    }
    ans.show();
}
void conv_postfix()
{
    string infix,postfix;
    stack_c stack;
    cout<<"Enter the infix expression:- "<<endl;
    getline(cin,infix);
    string s=")";
    infix=infix+s;
    int i=0;
    while(infix[i]!=')')
    {
        if(infix[i]!='+')
        postfix=postfix+infix[i];
        else{
            if(stack.top==-1)
            {
                stack.push(infix[i]);
            }
            else{
                while(stack.s[stack.top]=='+')
                    postfix=postfix+stack.pop();
            }
        }
        i++;
    }
    cout<<postfix;
}
int main()
{
//eval_postfix();
conv_postfix();
}

