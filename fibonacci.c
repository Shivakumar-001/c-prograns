#include<stdio.h>
#include<conio.h>
int fib(int n)
void main()
{
		if(n==0)
		{
			return 0;
		}
		else if(n==1)
		{
			return 1;
		}	
		else
		{
			return (fib(n-1)+fib(n-2));
		}
}
void main()
{
		int n,i;
		clrscr();
		printf("Enter the numbers of elements?\n");
		scanf("%d",&n);
		printf("fibonacci of %d:",n);
		for(i=0'i<n;i++)
		{
				printf("%d",fib(i));
		}
getch();
}

      
