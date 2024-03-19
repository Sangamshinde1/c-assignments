#include <stdio.h>
#include <math.h>

int prime(int num)
{
    if (num <= 1)
    {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int armstrong(int num)
{
    int orinum, rem, res = 0, n = 0;
    orinum = num;

    while (orinum != 0)
    {
        orinum /= 10;
        ++n;
    }

    orinum = num;

    while (orinum != 0)
    {
        rem = orinum % 10;
        res += pow(rem, n);
        orinum /= 10;
    }

    if (res == num)
    {
        return 1;
    }
    return 0;
}
int main()
{
    printf("Prime numbers between 1 to 100:\n");
    for (int i = 1; i <= 100; i++)
    {
        if (prime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    printf("\nArmstrong numbers between 1 to 500:\n");
    for (int i = 1; i <= 500; i++)
    {
        if (armstrong(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
