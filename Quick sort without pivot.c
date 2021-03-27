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
	QS(A,0,n);
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
		QS(A,p,q);
		QS(A,q+1,r);
	}
}
int part(int A[],int p,int r)
{
	int x,i,j;
	x=A[p];
	i=p;
	j=r;
	do{
	
	do{
		i++;
	}while(A[i]<=x);
	do{
		j--;
	}while(A[j]>x);
	if(i<j)
	{
		swap(&A[i],&A[j]);
	}
	swap(&A[p],&A[j]);
    }while(i<j);
    swap(&A[p],&A[j]);
	return (j);
}
void swap(int *x, int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
