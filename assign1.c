#include<stdio.h>

int main()
{
    int a, b, choice;
    
    printf("enter the number 1\n: ");
    scanf("%d", &a);

    printf("Enter the number 2\n: ");
    scanf("%d", &b);

    printf("Enter the choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1: printf("ADD = %d", a+b);
        break;

    case 2: printf("MUL = %d", a*b);
        break;

    case 3: printf("DIV = %d", a/b);
        break;
    
    default:printf("Invalid");
        break;
    }

    int res;
    res = a + b;
    printf("Addition of a & b = %d\n", res);

    int mul;
    mul = a * b;
    printf("Product of a & b = %d\n", mul);

    int div;
    div = a / b;
    printf("Division of a & b = %d\n", div);

    return 0;
}