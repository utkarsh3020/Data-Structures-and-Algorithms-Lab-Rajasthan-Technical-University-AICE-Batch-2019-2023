#include<stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
heap(int A[],int n,int i)
{
	int j=1,left,right,max;
	max=i;
	left=2*i;
	right=2*j+1;
}
void insert(int A[],int n)
{
		heap(A,n,1);
	int t,i=n-1;
	t=A[n-1];
	while(i>1 && t>A[i/2])
	{
		A[i]=A[i/2];
		i=i/2;
	}
}
int deleting(int A[],int n)
{
	heap(A,n,1);
	int i,j,t;
	t=A[1];
	A[1]=A[n-1];
	A[n-1]=t;
	i=1;
	j=2*i;
	while(j<n-2)
	{
		if(A[j+1]>A[j])
		{
			j=j+1;
		}
		if(A[i]<A[j])
		{
			swap(&A[i],&A[j]);
			i=j;
			j=2*j;
		}
		else
		  break;
	}
	return t;
}
void main()
{
	int n,i;
    int	A[]= {0,15,2,3,4,17,9,6,44,71};
	n=sizeof(A)/sizeof(A[0]);
//	printf("%d\n",n);
	i=1;
//	heap(A,n,i);
	for(i=2;i<n;i++)
    { 
            insert(A,i);
    }

    for(i=n-2;i>0;i++)
    {
    	deleting(A,n);
	}

    for(i=1;i<n;i++)
    {
    		heap(A,n,i);
    	printf("%d\n",A[i]);
	}
	
}

