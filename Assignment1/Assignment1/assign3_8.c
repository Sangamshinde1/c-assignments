#include <stdio.h>

int main() 
{
    int a, i;

    printf("Enter a number: ");
    scanf("%d", &a);


    for (i = 2; i * i <= a; i++) 
	{
        while (a % i == 0) 
		{
            printf("%d ", i);
            a /= i;
        }
    }
	 if (a > 1) 
	 {
        printf("%d", a);
     }

    printf("\n");
    return 0;
}
