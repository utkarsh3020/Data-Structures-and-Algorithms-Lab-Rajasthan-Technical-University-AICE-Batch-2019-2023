#include<stdio.h>
struct arraystack
{
	int top;
	int capacity;
	int *array;
};
struct arraystack* createstack(int);

struct arraystack* createstack(int cap)
{
	struct arraystack* stack;
	stack=(struct arraystack*)malloc(sizeof(struct arraystack)); //it returns the void pointer that would be typecast into arraysrack
    stack->top=-1;
    stack->capacity=cap;
    stack->array=malloc(sizeof(int)*stack->capacity);
    return stack;	 
}
int isfull(struct arraystack* stack)
{
	int cap;
//	cap=stack->capacity;
	if(stack->top==(stack->capacity)-1)
	return(1);
	else
	return(0);
}
int isempty(struct arraystack* stack)
{
	if(stack->top==-1)
	return(1);
	else
	return(0);
}
void push(struct arraystack* stack,int item)
{
	if(!isfull(stack))
	{
		stack->top++;
		stack->array[stack->top]=item;
	}
}
int pop(struct arraystack* stack )
{
	int item;
	if(!isempty(stack))
	{
	     item=stack->array[stack->top];
	     stack->top--;
	     return item;
	}
	return -1;
}
int peek(struct arraystack *stack)
{
	int n;
    if(stack->top==-1)
    return -1;
    else
    n=stack->array[stack->top];
    return n;

}
void traverse(struct arraystack *stack)
{
	int i;
	if(stack->top==-1)
	printf("Stack is empty!!\n");
	else
	printf("Stack elements are:\n");
	for(i=0;i<=stack->top;i++)
	{
		printf("%d\n",stack->array[i]);
	}
}
void main()
{
	int n,item;
	struct arraystack* stack;
	stack=createstack(2);
	printf("\t\t\t 1. Push operation\n");
	printf("\t\t\t 2. Pop operation\n");
	printf("\t\t\t 3. Traverse operation\n");
	printf("\t\t\t 4. Peek operation\n");
	printf("\t\t\t 5. Exit\n");
	while(1)
	{
		printf("Enter your choice: ");
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				if(isfull(stack))
				printf("Stack is overflow!!\n");
				else
				{
					printf("Enter data: ");
					scanf("%d",&item);
					push(stack,item);
				}
				break;
			case 2:
				item=pop(stack);
				if(item==-1)
				printf("Stack is underflow!!\n");
				else
				{
					printf("Poped element: %d \n",item);

				}

				break;
			case 3:
				traverse(stack);
				break;
			case 4:
				item=peek(stack);
				if(item==-1)
				printf("Stack is empty\n");
				else
				printf("Peek value is: %d \n",item);
			
				break;
			case 5:
				exit(0);
				break;

		}
	}

	
}
