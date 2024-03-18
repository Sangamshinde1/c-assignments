#include<stdio.h>
int main(void)
{
	char ch;
	printf("Enter the character \n");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		printf("ALPHABET\n");
		printf("UPPERCASE\n");
	}
	else if(ch>=97&&ch<=122)
	{
		printf("ALPHABET\n");
		printf("LOWERCASE\n");
	}
	else if(ch>=48&&ch<=57)
	{
		printf("DIGIT\n");
	}
	else if(ch=='\t'||ch=='\r'||ch=='\n'||ch==' ')
	{
		printf("SPACE\n");
	}
	else
		printf("NOT LISTED ABOVE\n");
return 0;
}
