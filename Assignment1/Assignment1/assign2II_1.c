#include <stdio.h>
int main() 
{
    int month, year;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    int days;
    switch (month) 
	{
        case 1:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) 
			{
               printf(" days = 29");
            } else 
			{
               printf(" days = 28");
            }
            break;
     	case 2:
		case 4:
		case 6:
		case 9:
		case 11:
           printf(" days = 30");
            break;
        default:
            days = 31;
	return 1;
	}
    }
	}
    printf("The number of days in %d/%d is: %d\n", month, year, days);
    return 0;
}
