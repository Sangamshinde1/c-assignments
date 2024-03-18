#include<stdio.h>
int main(void)
{
	float price = 5,qty,total,dis_price;
	printf("Enter the quantity\n");
	scanf("%f",&qty);
	total=price*qty;
	printf("Total is :%f\n",total);
	if(qty>50)
	{
		dis_price=total-(total*15)/100;
	}
	if(qty>30)
	{
		dis_price=total-(total*10)/100;
	}
	printf("Discount Price is:%f\n",dis_price);
return 0;
}
