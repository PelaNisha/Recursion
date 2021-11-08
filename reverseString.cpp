// program to reverse the string

#include<stdio.h>

void reverse();

int main()
{
	printf("enter the sentence\n");
	reverse();
	return 0;
}

void reverse()
{
	char ch;
	scanf("%c", &ch);
	if(ch!='\n')
		reverse();
	printf("%c", ch);	
}
