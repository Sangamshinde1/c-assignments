#include<stdio.h>

int main()
{

    int num, i;
    printf("Enter the Number:: ");
    scanf("%d", &num);
    
  
    


    for(i=1; i<=10; i++)
    {
        int k= i*num;
        
        printf("Table = %d\n",k);
    }
    return 0;
}