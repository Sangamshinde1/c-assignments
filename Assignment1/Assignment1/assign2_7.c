#include<stdio.h>
// using elseif
int main()
{
	int year;
	printf("Enter the year  : ");
	scanf("%d",&year);

	if( year % 400 == 0)
		printf("Leap Year \n");
	else if( year %100 == 0 )
		printf("Not Leap \n");
	else if( year % 4 == 0 )
		printf("Leap Year \n");
	else
		printf("Not leap \n\n\n");
 
//using logical operator

		printf("------------------------------------------\n");
	if( (year % 4 == 0 && year % 100 != 0) || year % 400 == 0 )
		printf("Leap Year \n");
	else
		printf("Not Leap\n");

//using conditional operator

		printf("--------------------------------------------\n");

(year % 4 == 0 && year % 100 != 0)?printf("Leap\n")  : (year % 400 == 0)?printf("Leap\n") : printf("Non-Leap\n");

}

