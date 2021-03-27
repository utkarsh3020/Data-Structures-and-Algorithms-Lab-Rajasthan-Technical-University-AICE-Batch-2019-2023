#include<stdio.h>
void toh(int n, char A, char B, char C)
{
	if(n==1)
	{
		printf("%d, %c, %c, %c\n",n,A,B,C);
		return;
	}
	else
	{
		 toh(n-1,A,C,B);

		printf("1, %c, %c, %c\n",A,B,C);
	     toh(n-1,B,A,C);
		
	}
}
void main()
{
	int n;
	printf("Enter no. of disks: ");
	scanf("%d",&n);
	printf("Here:\n(One disk at a time, From rod, Aux rod, To rod)  pattern is shown:\n");
	toh(n, 'A', 'B','C');
}
