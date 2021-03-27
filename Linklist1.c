#include<stdio.h>
#include<stdlib.h>
struct node{
	int info;
	struct node *link;
};
count=0;
struct node *START=NULL;   //start pointer to control the linklist//
struct node* createnode();
void insertatlast();          //insert at last//
void deleteatfirst();          //delete at first//
void viewlist();
void insertatfirst();
int getlength();
int menu();
void insertafteranynode();
void deleteatlast();
void deleteatposition();

struct node* createnode()  //create node dynamically//
{
    struct node *n;
    n=malloc(sizeof(struct node));
	return(n);
}
void insertatlast()
{   
    struct node *temp,*t;
	temp=createnode();
	printf("Enter the data in node\n");
	scanf("%d",&temp->info);
	temp->link=NULL;
	if(START==NULL)
	START=temp;
	else
	{
		t=START;
		while(t->link!=NULL)
		{
			t=t->link;
		}
		t->link=temp;
	}
}
void deleteatfirst()                  //delete at first//
{
	if(START==NULL)
	printf("List is empty\n");
	else
	{
		struct node *q;
		q=START;
		START=START->link;
		free(q);
	}
}
void viewlist()
{   struct node* t;
	if(START==NULL)
	{
		printf("No List\n");
	}
	else
	{
		t=START;
		while(t!=NULL)
		{
			printf("%d\n",t->info);
			t=t->link;
		}
	}
}
void insertatfirst()
{  struct node*New;
   New=createnode();
   printf("Enter the data in node\n");
   scanf("%d",&New->info);

   if(START==NULL)
   START=New;
   else
   {
   	New->link=START;
   	START=New;
   	
   }
}
int getlength()
{
	struct node*t;
	if(START==NULL)
	printf("List is empty\n");
	else
	{
		t=START;
		while(t!=NULL)
		{
			count+=1;
			t=t->link;
		}
	}
	return count;
}
void insertafteranynode()
{
	int position;
	struct node* newnode,*t;
	if(START==NULL)
	printf("List is empty\n");
	else
	{
		printf("Enter position after which you want to add: \n");
		scanf("%d",&position);
		if(position>getlength())
		{
			printf("Wrong position\n");
			insertafteranynode();     //recurssion//
			     		
		}
		else
		{
			int i=1;
			newnode=createnode();
			printf("Enter Data\n");
			scanf("%d",&newnode->info);
			newnode->link=NULL;
			if(START==NULL)
			START=newnode;
			else
			{
				t=START;
				while(i<position)
				{
					t=t->link;
					i++;
				}
				newnode->link=t->link;
				t->link=newnode;
			}
		}
	}
}
void deleteatlast()
{
	struct node* t, *q;
	if(START==NULL)
	{
		printf("List is empty\n");
    }
	else
	{
		t=START;
		q=START;
		while(t->link!=NULL)
		{
			q=t;
			t=t->link;
		}
		if(t==START)
		{
			START==NULL;
		}
		else
		{
		q->link=NULL;
		free(t);
    	}
	}
}
void deleteatposition()
{
	struct node *t , *q;
	int position,i=1;
	t=START;
	if(START==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		printf("Enter position after which you want to delete: \n");
		scanf("%d",&position);
		if(position>getlength())
		{
			printf("Wrong position\n");
			deleteatposition();     //recurssion//
			     		
		}
		else
		{
			while(i<position)
			{   
			    q=t;
				t=t->link;
				i++;
	        }
	    if(t==START)
	    {
	       START==NULL;	
		}
		else
		{
		
	        q->link=t->link;
	        
	        free(t);
        }
		}
	}

	
	
	
}
int menu()
{
	int ch;
	printf("\t\t\t 1.ADD NODE LAST IN LINK\n");
	printf("\t\t\t 2.ADD NODE AT FIRST IN LINK\n");
	printf("\t\t\t 3.VIEW LIST IN LINK\n");
	printf("\t\t\t 4.DELETE NODE AT FIRST IN LINK\n");
    printf("\t\t\t 5. TO SEE THE LENGTH OF LIST\n");
    printf("\t\t\t 6. INSERT NODE IN BETWEEN \n");
    printf("\t\t\t 7.DELETE NODE AT LAST IN LINK\n");
    printf("\t\t\t 8.DELETE NODE AT SPECIFIC POSITION IN LINK\n");
	printf("\t\t\t 9.EXIT\n");


	printf("ENTER THE CHOICE\n");
	scanf("%d",&ch);
	return(ch);

}
void main()
{   int k;
	while(1)
	{
	
	switch(menu())
	{
		case 1:
			insertatlast();
			break;
		case 2:
			insertatfirst();
			break;
		case 3:
			viewlist();
			break;
		case 4:
			deleteatfirst();
			break;
	
		case 5:
		    k=getlength();
		    printf("THE LENGTH OF THE LIST IS %d\n",k);
		case 6:
			insertafteranynode();
			break;
		case 7:
			deleteatlast();
			break;
		case 8:
			deleteatposition();
			break;
		case 9:
			exit(0);
			break;
	    default:
	    	printf("Not available\n");
		
}}}
    






