#include<stdio.h>

void reverse_array(short arr[], int length)
{
	for(int i = 0 , j = length - 1 ; i < j ; i++, j--)
	{
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	
}

void print_array(short arr[], int length)			// short *arr
{
	printf("Array : ");
	for(int  i = 0 ; i < length ; i++)
		printf("%d", arr[i]);
	printf("\n");
}


int main(void)
{
	int arr[6]= {11,33,55,77,22,88};

	reverse_array(arr, 6);
	print_array(arr, 6);


	return 0;

}
