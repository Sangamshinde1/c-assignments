/*#include<stdio.h>
#include<math.h>
sqrt(double(double));
int main(void)
{
	int a,b,c;
	double area,per,s;
	printf("Enter the sides of Triangle :");
	scanf("%d%d%d",&a,&b,&c);
	s=(a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c)); 
	printf("Area of triangle : %lf",area); 
	per=a+b+c*a+b+c;
	printf("Parameter of triangle : %lf",per);

return 0;
}


#include<stdio.h>
#include<math.h>
int main()
{
     float a,b,c;
     float s,tri_area;
     printf("Enter Sides of Triangle\n");
     scanf("%f%f%f",&a,&b,&c);
     s =(a+b+c)/2.0;
     tri_area=sqrt(s*(s-a)*(s-b)*(s-c));
     printf("----------------------------\n");
     printf("Area of Triangle = %.3f",tri_area);
     return 0;
}*/

#include<stdio.h>
#include<math.h>

int main()
{
  float a, b, c, Perimeter, s, Area;

  printf("\nPlease Enter three sides of triangle\n");
  scanf("%f%f%f",&a,&b,&c);

  Perimeter = a+b+c;
  s = (a+b+c)/2;
  Area = sqrt(s*(s-a)*(s-b)*(s-c));

  printf("\n Perimeter of Traiangle = %.2f\n", Perimeter);
  printf("\n Semi Perimeter of Traiangle = %.2f\n",s);
  printf("\n Area of triangle = %.2f\n",Area);

  return 0;
}
