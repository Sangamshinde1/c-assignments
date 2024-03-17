#include<stdio.h>

int main()
{
    int num;
    
    printf("Enter the Number: ");
    scanf("%d", &num);

    printf("The number in Character = %c\n", num);
    printf("The number in Decimal: %d\n", num);
    printf("The number in Octal: %o\n", num);
    printf("The number in Hexadecimal: %x\n", num);

    return 0;
}