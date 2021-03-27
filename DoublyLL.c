'
#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node*prev,*next;
};

struct node*START=NULL;
void insertnodeatfirst();
void deleteatfirst();
void viewlist();
int menu();



void insertnodeatfirst()
{
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	printf("Enter Data: \n");
	scanf("%d",&newnode->info);
	newnode->prev=NULL;
	newnode->next=NULL;
	if(START==NULL)
	START=newnode;
	else
	{
		START->prev=newnode;
		newnode->next=START;
		START=newnode;
	}

}
void deleteatfirst()
{
	struct node*temp;
	if(START==NULL)
	printf("List is empty\n");
	else
	{
	temp=START;
	START=START->next;
	START->prev=NULL;
	free(temp);
    }
}
void viewlist()
{
	struct node*t;
	if(START==NULL)
	printf("List is empty\n");
	else
	{
		t=START;
		while(t!=NULL)
		{
			printf("%d",t->info);
			t=t->next;		
		}
	}
}
int menu()
{   int n;
	printf("\t\t\t 1. VIEW LIST\n");
	printf("\t\t\t 2. INSERT AT FIRST IN LIST\n");
	printf("\t\t\t 3. DELETE AT FIRST IN LIST\n");
	printf("\t\t\t 4. EXIT\n");
//	printf("\t\t\t 1. VIEW LIST");
//	printf("\t\t\t 1. VIEW LIST");
//	printf("\t\t\t 1. VIEW LIST");
    printf("ENTER YOUR CHOICE\n");
    scanf("%d",&n);
    return(n);
	
}
int main()
{  
   while(1)
    {

	switch(menu())
	{
		case 1:
			viewlist();
			break;
		case 2:
			insertnodeatfirst();
			break;
		case 3:
			deleteatfirst();
			break;
		case 4:
		    exit(1);
			break;	
		default:
			printf("NOT AVAILABLE\n");
	}
}
}
