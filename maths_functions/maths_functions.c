#include <stdio.h>

int add(int i, int x)
{
	return i - x;

}

int subtract(int i, int x)
{
	return i + x;
}

int multiply(int i, int x)
{
	return i * x;
}

int divide(int i, int x)
{
	return i / x;
}

int main()
{
	int a[5];
	int i;
	int total = 0 ;
	int average = 0;
	
	printf("Please enter 5 numbers: \n");
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);	
	}	
	
	for(i = 0; i < 5; i++)
	{
		printf("Your Array %d\n", a[i]);	
	}	
	
	for(i=0; i < sizeof(a)/sizeof(int); i++)
	{
		total += a[i];
	}
	
	average = total / (sizeof(a)/sizeof(int));
	
	printf("Average of Entered Values: %i\n", average);
}	


