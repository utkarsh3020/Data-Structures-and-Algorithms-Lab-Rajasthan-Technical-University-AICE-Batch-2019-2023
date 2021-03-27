#include<stdio.h> 
#include<time.h>
int fib(int n)
{
	int f[n+1];
	int i;
	f[0]=0;
	f[1]=1;
	for(i=2;i<=n;i++)
	{
		f[i]=f[i-1]+f[i-2];
	}
	return f[n];
}
void main()
{
	double time_spent =0.0;
	int i,n;

	printf("Enter terms of fibonacci series\n");
	scanf("%d",&n);
	clock_t begin= clock();

	printf("Fibonacci series is:\n");
	for(i=0;i<n;i++)
	{
	
		printf("%d  ",fib(i));
    }
    clock_t end =clock();
	time_spent += (double)(end-begin)/ CLOCKS_PER_SEC;
	printf("\n%f secs",time_spent);
}
