//C program to pass array to a function and find average of given arrays//

int avg();
#include<stdio.h>
int main()
{
	int c;
	c=avg();
	printf("\nAverage is %d", c);
}
int avg()
{
	int i, n, average=0, sum=0;
	printf("Enter value of n: ");
	scanf("%d", &n);
	int a[n];
	printf("\nEnter value of array: ");
	for(i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		sum += a[i];
	}
	average=sum/n;
	
	return average;
}

