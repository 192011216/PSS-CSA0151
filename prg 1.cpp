#include<stdio.h>
int main()
{
	int i, n;
	printf("\nC program to print even numbers: ");
	scanf("%d",&n);
	printf("All even numbers from 1 to %d are: \n", n);
	for ( i=2 ; i<=n ; i+=2)
	{ 
	 printf("%d\n",i);
	 
	}
}
