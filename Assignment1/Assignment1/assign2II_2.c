#include<stdio.h>

int calculate(int,char,int);
int flag ;

int main (void)
{
	int num1,num2,result;
	char choice,oper;

	do 
	{
	printf("Enter the Num1 : ");
	scanf("%d",&num1);

	printf("Enter the Operation : ");
	scanf("%*c%c",&oper);

	printf("Enter the Num2 : ");
	scanf("%d",&num2);

	result = calculate (num1,oper,num2);
	if (flag = 1)
	{	
		printf("%d%c%d = %d \n",num1,oper,num2,result);	
	}
	else
	{
		flag = 0;
}
	printf("Do you want to continue ?(Y/N)");
	scanf("%*c%c",&choice);
	}while(choice != 'N');

	return 0;
}

	
	int calculate(int num1,char oper,int num2)
	{
	int result;
		switch (oper)
		{
			case '+': 
				result = num1 + num2 ;
				break;
		
			case '-': 
				result = num1 - num2 ;
				break;
			case '*':
				result = num1 * num2 ;
				break;
			case '/':
				if (num2 == 0)
				{	printf("The Divison iS invalid due to denominater is zero");
					flag =1;
				}
				else
				{
					result = num1 / num2 ;
					flag = 0;
					}
					break;
		}
		
		return result;
		
	}


