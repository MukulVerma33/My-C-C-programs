#include<bits/stdc++.h>
using namespace std;
class stk{public:
char *s;
int top;
    stk()
    {
        s=new char[10];
        top=-1;
    }
    void push(char value)
    {
        top++;
        s[top]=value;
    }
    char pop()
    {
        top--;
        return(s[top+1]);
    }
    void display()
    {
        for(int i=top;i>-1;i--)
            cout<<s[i]<<" ";
            cout<<endl;
    }
    int test_brackets(string exp)
    {
        int i=0;
        while(exp[i])
        {
            if(exp[i]=='('||exp[i]=='['||exp[i]=='{')
                {push(exp[i]);}
               // display();}
            else{
                char top_bracket;
                /*{
                    if(s[top]=='(')
                        top_bracket=')';
                    else if(s[top]=='[')
                        top_bracket=']';
                    else if(s[top]=='{')
                        top_bracket='}';
                }*/
                    switch(s[top])
                    {
                    case '(':
                        top_bracket=')';
                        break;
                    case '[':
                        top_bracket=']';
                        break;
                    case '{':
                        top_bracket='}';
                        break;
                    }
                    //cout<<"top bracket is:- "<<top_bracket<<endl;
                if(exp[i]==top_bracket)
                    {pop();}
                    //display();}
                else
                {
                    cout<<"Error!!"<<endl;
                    return 0;
                }
            }
            i++;
        }
       // display();
        cout<<"Perfect!"<<endl;
    }
};
int main()
{
stk s;
s.test_brackets("[()]{}{[()()]()}");
}
