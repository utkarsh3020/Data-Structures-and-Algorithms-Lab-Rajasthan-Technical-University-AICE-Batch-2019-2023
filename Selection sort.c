#include<stdio.h>
void IS(int A[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n-1;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[min])
			min=j;
		}
		temp=A[min];
		A[min]=A[i];
		A[i]=temp;
		
	}
}

int main()
{
	int A[100], n, i;
	printf("Enter size of Array: ");
	scanf("%d",&n);
	printf("Enter Array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	IS(A,n);
	printf("Array after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
}
