#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node* next;
};
//struct node* LAST=NULL;
struct node* createnode();
struct node* insertnodeatfirst(struct node* LAST , int value);
struct node* insertnodeatempty(struct node* LAST , int value);
struct node* insertnodeatend(struct node* LAST , int value);
struct node* insertnodeatposition(struct node* LAST , int value, int item);
struct node* createlist(struct node* LAST);

void dispaly(struct node* LAST);


struct node* createnode()
{
	struct node* n ;
	n=malloc(sizeof(struct node));
	return n;
}

void dispaly(struct node* LAST)           //to access the linklist using last pointer value
{
	struct node *t;
	if(LAST==NULL)
	printf("List is empty!!\n");
	else
	{
		do
		{
		
		t=LAST->next;
		printf("%d\n",t->info);
		t=t->next;
		
	    }
	    while(t!=LAST->next);
	    
	}
}
struct node* insertnodeatfirst(struct node* LAST, int value)
{
	struct node* n;
	n=createnode();
	n->info=value;
	n->next=LAST->next;
	LAST->next=n;
	return LAST;
}
struct node* insertnodeatempty(struct node* LAST , int value)
{
	struct node* n;
	n=createnode();
	n->info=value;
	LAST=n;
	LAST->next=LAST;
	return LAST;
}
struct node* insertnodeatend(struct node* LAST , int value)
{
	struct node *n ,*t;
	n=createnode();
	n->info=value;
	n->next=LAST->next;
	LAST->next=n;
	LAST=n;
	return LAST;
	
}
struct node* insertnodeatposition(struct node* LAST , int value, int item)
{
	struct node *t, *n;
	t=LAST->next;
	do
	{
		if(t->info==item)
		{
			n=createnode();
			n->info=value;
			n->next=t->next;
			t->next=n;
			return LAST;
		}
	t=t->next;
	}while(t!=LAST->next);
	printf("%d is not available!!",item);
	return LAST;
}
struct node* createlist(struct node* LAST)
{
	int n,value,i;
	printf("Enter no. of nodes you want to add: ");
	scanf("%d",&n);
	printf("Enter first data: ");
	scanf("%d",&value);
    LAST=insertnodeatempty(LAST,value);
    for(i=2;i<=n;i++)
    {
    	printf("Enter next data: ");
     	scanf("%d",&value);
	    LAST=insertnodeatend(LAST,value);
	    
	}
     return LAST;
	
}
void main()
{
	struct node* LAST=NULL;
	int choice,value,item;
	while(1)
	{
	   printf("\t\t\t1. CREATE LIST\n");
	   printf("\t\t\t2. DISPLAY LIST\n");
	   printf("\t\t\t3. INSERT AT FIRST\n");
	   printf("\t\t\t4. INSERT AT EMPTY\n");
	   printf("\t\t\t5. INSERT AT END\n");
	   printf("\t\t\t6. INSERT AT AFTER POSITION\n");
	   printf("\t\t\t7.EXIT\n");
	   printf("Enter your choice\n");
	   scanf("%d",&choice);
	   switch(choice)
	   {
	   	   case 1:
	   	   	LAST=createlist(LAST);
	   	   	break;
	   	   case 2:
	   	   	dispaly(LAST);
	   	   	break;
	   	   case 3:
	   	   	printf("Enter the value: ");
	   	   	scanf("%d",&value);
	   	   	LAST=insertnodeatfirst(LAST,value);
	   	   	break;
	   	   case 4:
	   	   	printf("Enter the value: ");
	   	   	scanf("%d",&value);
	   	    LAST=insertnodeatempty(LAST,value);
	   	   	break;
	   	   case 5:	   	   
			printf("Enter the value: ");
	   	   	scanf("%d",&value);
            LAST=insertnodeatend(LAST,value);
	   	   	break;
	   	   case 6:
			printf("Enter the item value after which new value to be insert: ");
	   	   	scanf("%d",&item);
        	printf("Enter the value: ");
	   	   	scanf("%d",&value);
        	LAST=insertnodeatposition(LAST,value,item);
	   	   	break;
	   	   case 7:
	   	   	    exit(0);
	   	   	break;
	   	   default:
	   	   	printf("Choice not available\n");
	   }
	   	
	}
}




