#include<stdio.h>
void main()
{
	int i;
	int A[]={9,5,7,1,2,4,5,6,7,2};
	int n=sizeof(A)/sizeof(A[0]);
	printf("After sorting\n");
 	CS(A,n);
    for(i=0;i<n;i++)
    {
    	printf("%d\n",A[i]);
	}
}
int findmax(int A[] ,int n)
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
void CS(int A[], int n)
{
	int i,j,k;
	k=findmax(A,n);
	int C[k+1];
	for(i=0;i<=k;i++)
	{
		C[i]=0;
	}
  
	for(j=0;j<n;j++)
	{
		C[A[j]]++;
	}
     i=0,j=0;
     while(i<k+1)
     {
     	if(C[i]>0)
     	{
     		A[j++]=i;
     		C[i]--;
		 }
		 else
		 i++;
	 }

}
