// tower if hanoi

#include<stdio.h>

void TOH(int a, char x, char y , char z);

int main()
{
	int i;
	printf("Enter the number of disks:\n");
	scanf("%d", &i);
	TOH(i, 'S', 'D', 'I');
	return 0;
}
void TOH(int n, char A, char B , char C)
{
	if(n>0)
	{
		TOH(n-1, A,C, B);
		printf("move disk %d from %c to %c\n", n , A, B);
		TOH(n-1,C, B, A);
	}
}


