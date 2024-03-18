#include<stdio.h>
int main(void)
{
	int num;
	printf("Enter the number : ");
	scanf("%d",&num);
	if (num%2==0)
	{
		printf("Given number is even : %d\n",num);	
	}
	else 
	{	
		printf("Given Number is odd : %d\n",num);	
	}
return 0;
}
