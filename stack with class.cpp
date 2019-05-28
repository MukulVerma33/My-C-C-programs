//#include<iostream>
//using namespace std;
//int m=10;
//class stack{
//	public:
//		int *a;
//		stack()
//		{
//			a=new int[m];				//Two classes
//		}
//		void del()
//	{
//		delete a;
//	}
//};
//class operations{
//	public:
//    int top;
//	stack A;
//		operations()
//		{
//			top=0;
//			//a=new int[m];				//Single class
//		}
//	void push(int value)
//	{
//		if(top>m)
//		cout<<"OUTFLOW"<<endl;
//		else
//		{
//			top++;
//			A.a[top]=value;					//two classes
//		//	a[top]=value;					//single class
//		}
//	}
//	int pop()
//	{
//	    int val=A.a[top];
//		top--;
//		return(val);
//	}
//	void display()
//	{
//		for(int i=top;i>0;i--)
//		cout<<A.a[i]<<endl;
//	}
//
//};
//int eval_postfix(){
//    string exp;
//    operations ans;
//    cout<<"Enter the postfix expression:- "<<endl;
//    getline(cin,exp);
//    for(int i=0;exp[i];i++)
//    {
//        if(exp[i]==' ') continue;
//        else if(isdigit(exp[i]))
//        {int num=0;
//            while(isdigit(exp[i]))
//                  {
//                   num=num*10+(int)(exp[i]-'0');
//                   i++;
//                  }
//                  i--;
//                  ans.push(num);
//        }
//        else {
//            switch(exp[i])
//            {
//            case '+':
//                {
//                    int value1=ans.pop();
//                    int value2=ans.pop();
//                    ans.push(value2+value1);
//                }
//                case '-':
//                {
//                    int value1=ans.pop();
//                    int value2=ans.pop();
//                    ans.push(value2-value1);
//                }
//                case '*':
//                {
//                    int value1=ans.pop();
//                    int value2=ans.pop();
//                    ans.push(value2*value1);
//                }
//                case '/':
//                {
//                    int value1=ans.pop();
//                    int value2=ans.pop();
//                    ans.push(value2/value1);
//                }
//            }
//        }
//    }
//cout<<ans.A.a[ans.top];
//}
//int main()
//{
////	operations ob;
////	ob.push(10);
////	ob.push(20);
////	ob.push(30);
////	ob.push(40);
////	ob.push(50);
////	ob.push(60);
////	ob.push(70);
////	ob.pop();
////	ob.pop();
////	ob.display();
//eval_postfix();
//}
// CPP program to evaluate value of a postfix
// expression having multiple digit operands
#include <bits/stdc++.h>
using namespace std;

// Stack type
class Stack
{
    public:
    int top;
    unsigned capacity;
    int* array;
};

// Stack Operations
Stack* createStack( unsigned capacity )
{
    Stack* stack = new Stack();

    if (!stack) return NULL;

    stack->top = -1;
    stack->capacity = capacity;
    stack->array = new int[(stack->capacity * sizeof(int))];

    if (!stack->array) return NULL;

    return stack;
}

int isEmpty(Stack* stack)
{
    return stack->top == -1 ;
}

int peek(Stack* stack)
{
    return stack->array[stack->top];
}

int pop(Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}

void push(Stack* stack,int op)
{
    stack->array[++stack->top] = op;
}


// The main function that returns value
// of a given postfix expression
int evaluatePostfix(char* exp)
{
    // Create a stack of capacity equal to expression size
    Stack* stack = createStack(strlen(exp));
    int i;

    // See if stack was created successfully
    if (!stack) return -1;

    // Scan all characters one by one
    for (i = 0; exp[i]; ++i)
    {
        //if the character is blank space then continue
        if(exp[i] == ' ')continue;

        // If the scanned character is an
        // operand (number here),extract the full number
        // Push it to the stack.
        else if (isdigit(exp[i]))
        {
            int num=0;

            //extract full number
            while(isdigit(exp[i]))
            {
            num = num * 10 + (int)(exp[i] - '0');
                i++;
            }
            i--;

            //push the element in the stack
            push(stack,num);
        }

        // If the scanned character is an operator, pop two
        // elements from stack apply the operator
        else
        {
            int val1 = pop(stack);
            int val2 = pop(stack);

            switch (exp[i])
            {
            case '+': push(stack, val2 + val1); break;
            case '-': push(stack, val2 - val1); break;
            case '*': push(stack, val2 * val1); break;
            case '/': push(stack, val2/val1); break;

            }
        }
    }
    return pop(stack);
}

// Driver code
int main()
{
    char exp[21];
    for(int i=0;i<21;i++)
        cin>>exp[i];
    cout << evaluatePostfix(exp);
    return 0;
}

// This code is contributed by rathbhupendra
