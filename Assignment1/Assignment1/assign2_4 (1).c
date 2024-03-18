#include<stdio.h>
int main(void)
{

	int num1,num2,max;
	printf("Enter the Num1 and Num2 :");
	scanf("%d%d",&num1,&num2);

//1.Using if-else 

	if(num1>num2)
	{	
		printf("Num1 is maximum\n");
	}
	else
	{
		printf("Num2 is maximum\n");
	}

//2.Using conditional operator
	printf("----------------------\n");
	max = (num1>num2 ? num1 : num2 );
	printf("Maximum number :%d\n",max);

return  0;
}
