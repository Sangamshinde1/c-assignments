#include<stdio.h>


short find_max(short arr[], int length);

short find_min(short arr[], int length);


int main(void)
{
	short arr[6] = {11, 66, 33, 11, 22, 44};
	//short ret, key;

	//accept_array(arr, 6);
	//print_array(arr, 6);

	printf("Maximum element : %hd\n", find_max(arr, 6));
	printf("Minimum element : %hd\n", find_min(arr, 6));

	return 0;



}

short find_min(short arr[], int length)
{
	int min = arr[0];
	for(int i = 1 ; i < length ; i++)
	{
		if(arr[i] < min)
			min = arr[i];
	}
	return min;
}



short find_max(short arr[], int length)
{
	int max = 0;
	for(int i = 0 ; i < length ; i++)
	{
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}
