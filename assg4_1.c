#include<stdio.h>

int main()
{
    int subject[5];
    printf("Enter the Array Elements :: \n");
    for (int i =1; i<6; i++)
    {
        printf("Subject[%d]:: ", i);
        scanf("%d", &subject[i]);
    }

    int total = subject[1]+subject[2]+subject[3]+subject[4]+subject[5];

    int avg= total/5;

    printf("Total of Marks of all Subject = %d\n", total);
    printf("Average of Marks = %d", avg);

    return 0;
}