#include<stdio.h>
int main()
{
	 int Num1,Num2,Num3,max;
	 printf("Enter the Num1 : ");
	 scanf("%d",&Num1);
	 printf("Enter the Num2 : ");
	 scanf("%d",&Num2);
	 printf("Enter the Num 3 : ");
	 scanf("%d",&Num3);
//1.If-else
 	if(Num1 > Num2)
 	{	
 		if(Num1 > Num3)
		printf("Maximum Number is Num1 :%d\n  ",Num1);
		else if (Num3>Num2) 
		printf("Maximum Number is Num3 :%d\n",Num2);
	else
	printf("Maximum Number is Num2 :%d\n ",Num3);
	}


	printf("-------------------------------\n ");
//2.using conditional operator
	max = (Num1 > Num2)? ((Num1 > Num3)? Num1 : Num3) : ((Num2 > Num3)? Num2 : Num3) ;
	printf("Maximum number : %d\n",max);
return 0;
}


