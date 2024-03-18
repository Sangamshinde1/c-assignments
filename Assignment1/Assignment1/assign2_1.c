#include<stdio.h>
int main(void)
{
	int n1,n2,div;
	printf("Enter the numbers : ");
	scanf("%d%d",&n1,&n2);
	if(n2!=0)
	{
		div= n1/n2;
		printf("Division of two numbers : %d\n",div);
	}
	else
	{
		printf("Divider is zero \n");
		printf("Invalid operation ");
	}
	return 0;
}
