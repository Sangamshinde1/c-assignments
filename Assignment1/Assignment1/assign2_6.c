#include<stdio.h>
int main(void)
{
	int num,rem=1,sum =0,rev=0;
	printf("ENter the number :\n");
	scanf("%d",&num);
	int temp = num;
	while(num!=0)
	{
		rem = num%10;
		rev = rev*10+rem;
		num = num/10;
	}
	if(temp == rev)
		printf("It is palindrome \n");
	else 
		printf("Not a palindrome\n");
	return 0;
}

