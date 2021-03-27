#include<stdio.h>
int RLS(int A[], int n,int index,int key)
{
	if(index>=n)
	{
		return -1;
	}
	if(A[index]==key)
	{
		return index;
	}
	else
	{
		return RLS(A,n,index+1,key);
	}
}
void main()
{
	int A[30];
	int key,n,i,index,x;
	index=0;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter value to search: ");
	scanf("%d",&key);
	x=RLS(A,n,index,key);
	if(x!=-1)
	{ 
		printf("Value present at index: %d",x);
	}
	else
	{
		printf("Value not found!\n");
	}
}
