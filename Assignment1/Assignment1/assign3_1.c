#include<stdio.h>
int main()
{
	char ch;
	int num;
	printf("Enter the Character :");
	scanf("%c",&ch);
	printf("Enter the Number :");
	scanf("%d",&num);
	int count=1;
	while(num>=count)
	{
	count++;
		printf("%c",ch);
	}
		printf("\n");
return 0;
}
