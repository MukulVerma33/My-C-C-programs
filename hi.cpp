#include<iostream>
using namespace std;
struct queue
{
	int front,rear;
	int *array;
};
queue *create()
{
	queue *q=new queue;
	q->array=new int[5];
	q->front=q->rear=0;
	return *q;
}

int main()
{
	queue *q;
	q=create();
}
