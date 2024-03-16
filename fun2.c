#include<stdio.h>

/*
accept any number from user and check if it is 
  - Palindrome
  - prints its rev
  - check arm strong
  - prints its sum of digit
*/

//                       0        1        2     3      4
typedef enum operation {EXIT, SUM_Digit, REV , PALIN , ARM }opr;

int main()
{
   int num;
   opr choice;
   printf("Enter the Number : ");
   scanf("%d",&num);
	do
	{
		printf("0.Exit\n1.Sum_Of_Digit\n2.REVERSE\n3.PAINDROME\n4.ARMSTRONG\n");
		printf("Enter Your Choice : ");
		scanf("%d",&choice);
		int temp = num,rem, sum = 0 ,rev = 1 ,arm = 0;
		switch(choice)
		{
			case EXIT :printf("Bye-------\n");
						break;

			case SUM_Digit : while(temp != 0 )
							 {
								rem = temp % 10;
								sum = sum + rem;
								temp = temp / 10;
							 }
							 printf("SUm = %d \n",sum);
							 break;

			case REV :
			           break;
			case PALIN :
					   break;

			case ARM :while(temp != 0)
					  {
						rem = temp % 10;
						arm = arm + (rem * rem * rem );
						temp /= 10;
					  }
					  if(arm == num)
					  	printf("Armstrong : %d == %d \n",num,arm);
					  else
					  	printf("Not Armstrong \n");
					  break;

			 default : printf("Invalid Choice\n");
					     break;
		}

	}while( choice != 0 );


	return 0;
}



















