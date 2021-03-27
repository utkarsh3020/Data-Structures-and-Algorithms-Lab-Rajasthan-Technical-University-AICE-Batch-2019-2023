#include<stdio.h>
int RBS(int A[], int l, int h,int key)
{
	int mid;
	mid=(l+h)/2;
	if(l<=h)
	{
	
		if(A[mid]==key)
		return mid;
		if(A[mid]<key)
		return (RBS(A,mid+1,h,key));
		else
		return(RBS(A,l,mid-1,key));
	}
	else
	return -1; 
}
void main()
{
	int A[30], l,x, h, n, i ,key;
	printf("Enter size of array\n");
	scanf("%d",&n);
	l=0;
	h=n-1;
	printf("Enter Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("Enter value for search: ");
	scanf("%d",&key);
	x=RBS(A,l,h,key);
	if(x!=-1)
	printf("Value present at index: %d",x);
	else
	printf("Value not found\n");
}
