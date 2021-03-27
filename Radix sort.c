#include<stdio.h>
int maximum(int A[],int n)
{
	int max,i;
	max=A[0];
	for(i=1;i<n;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
		}
	}
	return max;
}
void RS(int A[],int n)
{
	int i,j,k=0,max, digits=0, pass;
	int nub[10],b[10][10];
	int loc,div=1;
	max=maximum(A,n);
	while(max>0)
	{
		max=max/10;
		digits++;
	}
	for(pass=1;pass<=digits;pass++)
	{
		for(i=0;i<10;i++)
		{
			nub[i]=0;
		}
		for(i=0;i<n;i++)
		{
			loc=(A[i]/div)%10;
			b[loc][nub[loc]++]=A[i];
		}
		k=0;
		for(i=0;i<10;i++)
		{
			for(j=0;j<nub[i];j++)
			{
				 A[k++]=b[i][j];
			}
		}
		div=div*10;
	}
}
void main()
{
	int n,i;
    int	A[]= {10,25,255,452,78,89,65};
	n=sizeof(A)/sizeof(A[0]);
	RS(A,n);
	printf("After sorting\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
}
