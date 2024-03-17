#include<stdio.h>

void accept_array(int arr[3][3]);
void print_array(int arr[3][3]);
void addition_array(int arr[3][3], int arr2[3][3]);

int main(void)
{
    int arr[3][3];
    int arr2[3][3];

    accept_array(arr);
    accept_array(arr2);
    print_array(arr);
    print_array(arr2);

    addition_array(arr, arr2);


    return 0;
}

void accept_array(int arr[3][3])
{
    printf("Enter the Elements of Array:: \n");
    for (int i = 0; i<3; i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("arr[%d][%d] :: ", i,j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void print_array(int arr[3][3])
{
    printf("Array = \n");
    for (int i = 0; i<3; i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("arr[%d][%d]:: %d ", i, j, arr[i][j]);
            
        }
        printf("\n");
    }
    printf("\n");

}
