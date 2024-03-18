#include<stdio.h>

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

int main(void)
{
	short arr[6] = {11, 66, 33, 11, 22, 44};

	printf("Maximum element : %hd\n", find_max(arr, 6));

	return 0;
}
