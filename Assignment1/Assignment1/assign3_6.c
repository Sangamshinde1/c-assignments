#include <stdio.h>

int main()
{
    int a, b, i = 2;
    printf("Enter a NO:");
    scanf("%d", &a);

    while (i <= a)
    {
        if (a % i == 0)
            printf("%d\n", i);
        i++;
    }
}
