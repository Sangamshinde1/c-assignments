#include <stdio.h>

int main() 
{
    int month, year;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    if (month < 1 || month > 12) 
	{
        printf("Invalid month. Please enter a month between 1 and 12.\n");
        return 1;
    }
    int days;
    if (month == 2) 
	{
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
		{
            days = 29;
     	}else 
		{
          days = 28;
    	}
    } else if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
        days = 30;
    } else 
	{
        days = 31;
    }
    printf("The number of days in %d/%d is: %d\n", month, year, days);

    return 0;
}

