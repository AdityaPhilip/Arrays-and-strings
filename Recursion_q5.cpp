//recursion question 5//
int S(int n, int a, int b, int c);
#include<stdio.h>
int main()
{
	int t,n; 
	int a,b,c;
	printf("Enter value of a,b,c: ");
	scanf("%d %d %d", &a,&b,&c);
	printf("\nEnter value of n: ");
	scanf("%d", &n);
	
	t=S(n,a,b,c);
	printf("nth term is: %d", t);
}

int S(int n, int a, int b, int c)
{
	int term;
	if(n==1){
		term= a;
	}
	else if(n==2)
	{
		term=b;
	}
	else if(n==3)
	{
		term= c;
	}
	else
	{
		term = S(n-1,a,b,c) + S(n-2,a,b,c) + S(n-3,a,b,c);
		return term;
		
	}
}

