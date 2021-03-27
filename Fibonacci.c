#include<stdio.h>
#include<time.h>

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

	else
	{
	    return fib(n-1)+fib(n-2);
	    
	}
}
void main()
{
	double time_spent =0.0;

	int i,n;

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
