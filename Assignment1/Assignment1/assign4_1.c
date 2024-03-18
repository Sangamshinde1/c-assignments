#include<stdio.h>
int fact (int n1)
{
    int res;
	if(n1 == 0 || n1 == 1 )
		return 1;

	res = n1 * fact(n1 - 1 );

	return res;
}
int main()
{
	int num ;
	printf ("enter the no :");
	scanf("%d",&num);
	int res = fact(num);
	printf("fact %d  %d \n",num,res);
	return 0;
}

