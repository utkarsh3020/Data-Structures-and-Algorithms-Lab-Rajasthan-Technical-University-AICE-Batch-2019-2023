#include<stdio.h>
#include<stdlib.h>
struct cqueue
{
	int size;
	int f,r;
	int *array;
};
int isfull(struct cqueue *q)
{
	if((q->r+1)%q->size==q->f)
	return 1;
	else
	return 0;
}
int isempty(struct cqueue *q)
{
	if(q->f==q->r)
	{
		return 1;
	}
	else
	return 0;
}
void enqueue(struct cqueue *q,int val)
{
	if(isfull(q))
	{
		printf("Queue is full!!\n");
	}
	else
	{
		q->r=(q->r+1)%q->size;
		q->array[q->r]=val;
		printf("Enqueue value is: %d\n",val);
	}
}
int dequeue(struct cqueue *q)
{
	int a=-1;
	if(isempty(q))
	{
		printf("Queue is empty!!\n");
	}
	else
	{
		q->f=(q->f+1)%q->size;
		a=q->array[q->f];
		
	}
	return a;
}
int main()
{
	struct cqueue q;
	q.size=4;
	q.f=q.r=0;
	q.array=(int *)malloc(sizeof(int)*q.size);
//  enqueue opration
	enqueue(&q,20);
	enqueue(&q,30);
	enqueue(&q,40);
//	enqueue(&q,50);
//Dequeue operation
    printf("Deleting  value: %d\n\n",dequeue(&q));
    printf("Deleting  value: %d\n\n",dequeue(&q));
    printf("Deleting  value: %d\n\n",dequeue(&q));
 //   printf(dequeue(&q));
	if(isempty(&q))
	{
		printf("Queue is empty!!\n");
	}	
	enqueue(&q,60);
	enqueue(&q,50);
	enqueue(&q,70);
	enqueue(&q,90);
	
}
