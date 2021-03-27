#include<stdio.h>
void BS(int A[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(A[j]>A[j+1])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
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
	BS(A,n);
	printf("Array after sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
}
