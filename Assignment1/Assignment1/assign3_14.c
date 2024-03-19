#include<stdio.h>
int main()
{
	int num;
	printf("Enter the NUmber : ");
	scanf("%d",&num);
	int flag = 1;
	
		for(int i = 2 ;  i <=  num / 2  ;i++)
		{
			if(num % i ==  0 )
			{
				flag = 0 ;
			}
				
		}
		if( flag == 1 )
			printf("Prime \n");
		else
			printf("Not prime \n");
	
	return 0;
}
