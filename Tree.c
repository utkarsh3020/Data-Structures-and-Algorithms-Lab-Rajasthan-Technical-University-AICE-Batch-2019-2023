#include<stdio.h>
struct tree{
	int data;
    struct tree *L;
    struct tree *R; 
};
struct tree * createnode()
{
	int x;
	struct tree *n;
	n=(struct tree *)malloc(sizeof(struct tree));
	printf("Enter data or if you don't want to add data then enter -1 \n");
	scanf("%d",&x);
	if(x==-1)
	{
		return 0;
	}
	n->data=x;
	printf("Enter left child of %d\n",x);
	n->L=createnode();
	printf("Enter right child of %d\n",x);
	n->R=createnode();
	return n;
}
void main()
{
	struct tree *root;
	root=NULL;
	root=createnode();
	if(root==0)
	{
		printf("There is no tree\n");
	}
	printf("%d",root->data);
}
