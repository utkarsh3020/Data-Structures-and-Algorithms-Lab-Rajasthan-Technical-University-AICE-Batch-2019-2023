#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack1[N],stack2[N];
int top1=-1,top2=-1;
void enq(int);
void dq();
void push1(int);
void push2(int);
int pop1();
int pop2();
int count=0;
void display();

void enq(int val)
{
	push1(val);
	count++;
}
void push2(int val)
{

		top2++;
		stack2[top2]=val;
	
}
void push1(int val)
{
	if(top1==N-1)
	{
		printf("Queue is full!!\n");
	}
	else
	{
		top1++;
		stack1[top1]=val;
	}
}
int pop1()
{
	return stack1[top1--];
}
int pop2()
{
	return stack2[top2--];
}

void deq()
{
	if(top1==-1&&top2==-1)
	{
		printf("Queue is empty!!\n");
	}
	else
	{
		int i=0,b;
		for(i=0;i<count;i++)
		{
			push2(pop1());
		}
		b=pop2();
		count--;
		for(i=0;i<count;i++)
		{
			push1(pop2());
		}
	}
}
void display()
{
	int i;
	for(i=0;i<=top1;i++)
	{
		printf("%d\n",stack1[i]);
	}
}
void main()
{
	deq();// queue is empty
	enq(10);
	enq(20);
	enq(30);
	enq(40);
	enq(50);
	enq(60);// queue is full
	deq();
	display(); // 20 30 40 50
	
	
}
