#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter the Number : ");
	scanf("%d",&num);
	if(num>0)
	{
		printf("The given number is positive\n");
	}
	else if(num<0)
	{
		printf("The given number is negative\n");
	}
	else
	{
		printf("The given number is zero\n");
	}

return 0;
}
