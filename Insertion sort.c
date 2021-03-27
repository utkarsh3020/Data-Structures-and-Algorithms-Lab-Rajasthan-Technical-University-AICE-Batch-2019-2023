#include<stdio.h>
void IS(int A[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp=A[i];
		j=i-1;
		while(j>=0 && A[j]>temp)
		{
			A[j+1]=A[j];
			j=j-1;
		}
		A[j+1]=temp;
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
