#include<stdio.h>

int main()
{
	int i ;
	int base,index,pow=1;
	printf("Enter the Base and Index: ");
	scanf("%d%d",&base,&index);
    for(i = 1 ;  i<= index ; i++ )
	{
		pow = pow*base;
	}
	printf("%d^%d=%d\n",base,index,pow);
	
	return 0;
}












