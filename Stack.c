#include<stdio.h>
int stack[100],x,top,n,i;

void push()
{
	if(top>=n-1)
	{
		printf("Stack is overflow!!\n");
	}
	else
	{
		printf("Enter value to be pushed: ");
		scanf("%d",&x);
		top=top+1;
		stack[top]=x;

	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is underflow!!\n");
	}
	else
	{
        printf("The poped element is %d\n",stack[top]);
        top=top-1;

    }
}
void traverse()
{
	if(top==-1)
	{
		printf("Stack is empty!!\n");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("%d\n",stack[i]);
		}
		
	}
}
int menu()
{
	int ch;
	printf("\t\t\t1.PUSH OPERATION\n");
	printf("\t\t\t2.POP OPERATION\n");
	printf("\t\t\t3.TRAVERSE OPERATION\n");
    printf("\t\t\t4.EXIT\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    return ch;
}
void main()
{
	top=-1;
	printf("Enter size of stack: ");
	scanf("%d",&n);
	while(1)
	{
		switch(menu())
		{
			case 1:
				push(top);
				break;
			case 2:
				pop(top);
				break;
			case 3:
				traverse(top);
				break;
			case 4:
				exit(0);
				break;
		}
	}
}

