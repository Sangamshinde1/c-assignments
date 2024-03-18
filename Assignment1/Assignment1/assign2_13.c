#include<stdio.h>
int main(void)
{
	int x,y;
	printf("Enter the values of x and y\n");
	scanf("%d%d",&x,&y);
	printf("Point (%d,%d)",x,y);
	if(x==0&&y==0)
	{
		printf("The point lies at the origin\n");
	}
	else if(x==0)
	{
		printf("The point lies on X-axis\n");
	}
	else if(y==0)
	{
		printf("The point lies on Y-axis\n");
	}
	else if(x>0&&y>0)
	{
		printf("1st QUADRANT\n");
	}
	else if(x<0&&y>0)
	{
		printf("2nd QUADRANT\n");
	}
	else if(x<0&&y<0)
	{
		printf("3rd QUADRANT\n");
	}
	else if(x>0&&y<0)
	{
		printf("4th QUADRANT\n");
	}
return 0;
}
