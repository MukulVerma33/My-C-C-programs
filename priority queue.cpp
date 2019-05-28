#include<bits/stdc++.h>
using namespace std;
void srt(int *queue,int *priority,int front,int rear)
{
    for(int i=front;i<rear+1;i++)
    {
        for(int j=i+1;j<rear+1;j++)
        {
            if(priority[j]<priority[i])
                {
                    swap(priority[i],priority[j]);
                    swap(queue[i],queue[j]);
                    }
        }
    }
}
class pq_unordered{
    int *queue;
    int *priority;
    int front,rear;
public:
    pq_unordered()
    {
        queue=new int[50];
        priority=new int[50];
        front=rear=-1;
    }
void enque(int value,int priority)
{
    if(front == -1)
        front++;
    rear++;
    queue[rear]=value;
    this->priority[rear]=priority;
}
int deque()
{
    int max=0;
    for(int i=front;i<rear+1;i++)
    {
        if(priority[i]>priority[max])
            max=i;
    }
    swap(queue[rear],queue[max]);
    swap(priority[rear],priority[max]);
    rear--;
    return queue[max];
}
void show()
{
    for(int i=front;i<rear+1;i++)
        cout<<queue[i]<<" "<<priority[i]<<endl;
}
};
class pq_ordered{
    int *queue;
    int *priority;
    int front,rear;
public:
    pq_ordered()
    {
        queue=new int[50];
        priority=new int[50];
        front=rear=-1;
    }
void enque(int value,int priority)
{
    if(front == -1)
        front++;
    rear++;
    queue[rear]=value;
    this->priority[rear]=priority;
    srt(queue,this->priority,front,rear);
}
int deque()
{
    rear--;
    return queue[rear+1];
}
void show()
{
    for(int i=front;i<rear+1;i++)
        cout<<queue[i]<<" "<<priority[i]<<endl;
}
};
int main()
{
    pq_ordered pq;
    pq.enque(10,1);
    pq.enque(33,33);
    pq.enque(20,2);
    pq.deque();
    pq.show();
}
