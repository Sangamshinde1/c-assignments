#include<stdio.h>

int dayofweek(int d, int m, int y);

int main()
{
	int d,m,y,day;
    printf("Enter the Date:: ");
    scanf("%d", &d);
    printf("Enter the Month:: ");
    scanf("%d", &m);
    printf("Enter the Date:: ");
    scanf("%d", &y);

    day=dayofweek(d,m,y);
    
	printf("%d\n", day);

    switch (day)
    {
        case 1: printf("Monday\n");
            break;

        case 2: printf("Tuesday\n");
            break;

        case 3: printf("Wednesday\n");
            break;

        case 4: printf("Thursday\n");
            break;

        case 5: printf("Friday\n");
            break;

        case 6: printf("Saturday\n");
            break;

        case 0: printf("Sunday\n");
            break;
    
    }

	return 0;
}

int dayofweek(int d, int m, int y)
{
	static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	y -= m < 3;
	return (y + y / 4 - y / 100 + y / 400 + t[m - 1] + d)
		% 7;
}
