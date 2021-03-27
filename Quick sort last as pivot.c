#include<Stdio.h>
int part(int A[],int p, int r);
void QS(int A[],int p, int r);
void swap(int *, int *);
void main()
{
	int A[100],n,i;
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	QS(A,0,n-1);
	printf("Sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",A[i]);
	}
}
void QS(int A[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=part(A,p,r);
		QS(A,p,q-1);
		QS(A,q+1,r);
	}
}
int part(int A[],int p,int r)
{
	int x,i,j;
	x=A[r];
	i=p-1;
	for(j=p;j<r;j++)
	{
		if(A[j]<x)
		{
			i=i+1;
			swap(&A[i],&A[j]);
		}
	}
	swap(&A[i+1],&A[r]);
	return (i+1);
}
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
