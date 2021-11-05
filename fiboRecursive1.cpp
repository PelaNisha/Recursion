// fibo using recursion
#include<stdio.h>

int fibo(int a)
{
	if(a==1||a==0)
	{
		return a;
	}else
	{
		return fibo(a-1)+fibo(a-2);
	}
}
int main()
{
	int x, i = 0, sum = 0;
	printf("Enter the number\n");
	scanf("%d", &x);
	while(i<x)
	{
		printf("%d ", fibo(i));
		sum=sum+fibo(i);
		i++;
	}
	printf("\n\nSum: %d", sum);
}
