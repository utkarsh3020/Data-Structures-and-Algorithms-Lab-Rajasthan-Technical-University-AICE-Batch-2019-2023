#include<stdio.h>
#include<time.h>
int f[30000];
int fib(int n)
{
	if(n<=1)
	{
		return 0;
	}
	if(n==2)
	{
		return 1;
	}
	if(f[n]!=-1)
	{
		return f[n];
	}
	else
	{
	//	printf("%d  ",fib(n-1)+fib(n-2));
	    f[n]= fib(n-1)+fib(n-2);
	    return f[n];
	}
}
void main()
{
	double time_spent =0.0;

	int i,n;
	for(i=0;i<30000;i++)
	{
		f[i]=-1;
		
	}
	printf("Enter terms of fibonacci series\n");
	scanf("%d",&n);
	printf("Fibonacci series is:\n");
	clock_t begin= clock();
	for(i=1;i<=n;i++)
	{
	
		printf("%d  ",fib(i));
    }
    clock_t end =clock();
	time_spent += (double)(end-begin)/ CLOCKS_PER_SEC;
	printf("\n%f secs",time_spent);
}
