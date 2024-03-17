#include<stdio.h>

int main()
{
    int num1, num2, num3;
    printf("Enter the Num1:: ");
    scanf("%d", &num1);
    printf("Enter the Num2:: ");
    scanf("%d", &num2);
    printf("Enter the Num3:: ");
    scanf("%d", &num3);

    int avg;
    avg = (num1+num2+num3)/3;

    printf("Average of Numbers = %d", avg);

    return 0;
}