//Write a function to accept array elements from the user. Write another function to print array elements.
//Re-use these functions in rest of the assignments wherever required.
#include<stdio.h>


int acceptArray(int m);
void printArray(int);


int main()
{
    
    int m, res, ans, i;
    printf("Enter the Number of Elements you want:: ");
    scanf("%d", &m);
    //int arr[m];

    res= acceptArray(m);
    printf("%d\n", res);
    // ans = printArray(i);
    // printf("%d\n", ans);

    return 0;


}

int acceptArray(int m)
{
    int arr[m];
    printf("Enter the Array Elements :: \n");
    for (int i = 0; i < m; i++)
    {
        printf("Arr[%d]: \n", i);
        scanf("%d", &arr[i]);
    }
    
    
}

void printArray(int m)
{
    int arr[m];

    for (int i=0; i<m; i++)
    {
        printf("Arr[i]: %d\n", arr[m]);
    }
}