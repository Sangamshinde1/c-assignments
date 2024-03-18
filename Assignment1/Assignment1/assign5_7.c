#include<stdio.h>


void selection_sort(short arr[], int length)
{
	for(int i = 0 ; i < length - 1 ; i++)
	{
		for(int j = i + 1 ; j < length ; j++)
		{
			if(arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

}

void print_array(short arr[], int length)			// short *arr
{
	printf("Array : ");
	for(int  i = 0 ; i < length ; i++)
		printf("%-4hd", arr[i]);
	printf("\n");
}


int main(void)
{
	short arr[6] = {11, 66, 33, 11, 22, 44};
	short ret, key;

	selection_sort(arr, 6);
	print_array(arr, 6);

	return 0;

}
