#include<stdio.h>
#include<stdlib.h>
struct queue{
	int size;
	int f,r;
	int *arr;
	
};
int isempty(struct queue *q)
{
	if(q->f==q->r)
	{ return 1;
	}
	return 0;
}

int isfull(struct queue *q)
{
	if(q->r==(q->size)-1)
	{
		return 1;
}
else
return 0;	
}
int dequeue(struct queue *q)
{
	int a=-1;
	if(isempty(q))
	{
		printf("Queue is Empty!!\n");
	}
	else
	{
		q->f++;
		a=q->arr[q->f];
	}
	return a;
	
}
void enqueue(struct queue *q,int val)
{
	if(isfull(q))
	{
		printf("Queue is full!!\n");
	}
	else
	{
		q->r++;
		q->arr[q->r]= val;
		printf("Enqueue value %d successfully!!\n\n",val);
	}
}
int main()
{
	struct queue q;
//	q=malloc(sizeof(struct queue));
	q.size=5;

	q.arr=(int *)malloc(sizeof(int)*q.size);

	q.f=q.r=-1;
//  enqueue opration
    enqueue(&q,20);
    enqueue(&q,30);
    enqueue(&q,40);
    enqueue(&q,60);
    enqueue(&q,70);
    enqueue(&q,19);
//Dequeue operation
    printf("Deleting  value: %d\n\n",dequeue(&q));
    printf("Deleting  value: %d\n\n",dequeue(&q));
    printf("Deleting  value: %d\n\n",dequeue(&q));
    printf("Deleting  value: %d\n\n",dequeue(&q));
    dequeue(&q);

	return 0;
}
