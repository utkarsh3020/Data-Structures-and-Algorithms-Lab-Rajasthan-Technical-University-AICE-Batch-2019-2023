                              // DSA Assignment -> Stack implementation using linkedlist //
                                              // RITU SHIVHARE  //
                                                 // 19CS063  //

#include<stdio.h>
#include<stdlib.h>
struct node{                                         // stack is of struct node * type
	int data;
	struct node* next;
};
struct node * stack=NULL;                      //Initializing stack=NULL
	
struct node* createnode();                     //Createnode function to create node dynamically
void traverse(struct node** start);          //Start is of double pointer becoz stack itself is a pointer and to store the address of stack//
void push (struct node **start);
void pop(struct node** start);
void peek(struct node** start);
int menu();

struct node* createnode()
{
	struct node* n;     
	n=malloc(sizeof(struct node));              //Creation of node of struct node type
	return n;
}
void traverse(struct node **start)
{
	struct node *t;
	if((*start)==NULL)            //Pointer start indirectly points the stack OR we can say that (*start) is same works as stack do 
	{
		printf("Stack is empty!\n");
	}
	else
	{
		t=(*start);
		while(t!=NULL)
		{
			printf("%d\n",t->data);
			t=t->next;
		}
		
	}
}


void push (struct node **start)                   
{
	struct node *n;
	n=createnode();
	printf("Enter data you want to push: ");
	scanf("%d",&n->data);
	if(n!=NULL)
	{
		n->next=(*start);
		(*start)=n;
	}
	else
	{
	       (*start)=n;
	}
}

void pop(struct node** start)
{
	struct node* t;
	if((*start)==NULL)
	{
		printf("Stack is underflow!\n");
	}
	else
	{
		t=(*start);
		(*start)=(*start)->next;
		printf("Poped element is: %d\n",t->data);
		free(t);
		
	}
}
void peek(struct node** start)
{
	if((*start)==NULL)
	{
		printf("Stack is empty! \n");
	}
	else
	{
		printf("Peek element is: %d\n",(*start)->data);
	}
}
int menu()
{
	int n;
	printf("\t\t\t 1.TRAVERSE OPERATION\n");
	printf("\t\t\t 2.PUSH OPERATION\n");
	printf("\t\t\t 3.POP OPERATION\n");
	printf("\t\t\t 4.PEEK OPERATION\n");
	printf("\t\t\t 5. EXIT\n");
	printf("Enter your choice: ");
	scanf("%d",&n);
	return n;
}

void main()
{

	while(1)
	{
		switch(menu())
		{
			case 1:
				traverse(&stack);
				break;
			case 2:
				push(&stack);
				break;
			case 3:
				pop(&stack);
				break;
			case 4:
				peek(&stack);
			    break;
			case 5:
				exit(0);
				break;
			default:
				printf("INVALID OPTION\n");
				break;
		}
	}
}
