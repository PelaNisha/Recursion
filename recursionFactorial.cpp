//factorial using recursion

#include<stdio.h>
//int fact(int);
int fact(int a)
{
	
	if(a==0)
	{
		return 1;
	}
	else 
	{
	return (a*fact(a-1));
	}
}


int main()
{
	int x;
	printf("Enter the number\n");
	scanf("%d", &x);
	printf("The factorial is :%d ",fact(x));
}
