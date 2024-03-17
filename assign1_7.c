#include<stdio.h>
void main()
{
	int num,a,b,c,d;
	printf("Enter the Four digit  Number : ");
	scanf("%d",&num);
	a = num/1000;
	b = (num/100)%10;
	c = (num/10)%10;
	d = num%10;
printf("Face value of each decimal digit : ");
printf("\t%d\t%d\t%d\t%d\n",a,b,c,d);

printf("Place value : ");
printf("%d  = %d + %d + %d + %d\n",num,a*1000,b*100,c*10,d);

printf("Number in reverse order : ");
printf("%d%d%d%d\n",d,c,b,a);

}
