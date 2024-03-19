#include<stdio.h>
int main()
{
    int a=1,b,c,i=1;
    printf("Enter any no:");
    scanf("%d",&b);

    while(i<=b)
    {
        a=a*i;
        i++;
    }
    printf("%d\n",a);
}
