#include<stdio.h>
int main(void)
{
    int num, on, rem, dc = 0, res = 0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    on = num;
    while (on != 0) 
	{
        on /= 10;
        dc++;
    }
    on = num;
    while (on != 0) 
	{
        rem = on % 10;
        int temp = rem;

        for (int i = 1; i < dc; i++) 
		{
            temp *= rem;
        }
        res += temp;
        on /= 10;
    }
    if (res == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}
