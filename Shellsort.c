#include<stdio.h>
void SS(int A[],int n)
{
	int gap,i,j,temp;
	for(gap=n/2;gap>=1;gap/=2)
	{
		for(i=gap;i<n;i++)
		{
			temp=A[i];
			j=i-gap;
			while(temp<A[j]&& j>=0)
			{
				A[j+gap]=A[j];
				j=j-gap;
			}
			A[j+gap]=temp;
		}
	}
}
void main()
{
	int n,i;
    int	A[]= {10,15,2,3,4,17,9,6,44,71};
	n=sizeof(A)/sizeof(A[0]);
	SS(A,n);
	printf("After sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}	
	
}
