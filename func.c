#include<stdio.h>

int add(int c1, int c2);
int sub(int d1, int d2);
void mul(int g1, int g2);
int div(int h1, int h2);
int acceptNum();
void displayRes(int z1);



int main()
{
    int n1, n2;
    n1 = acceptNum();
    n2 = acceptNum();

   // acceptNum(4,8);
    mul(n1,n2);
   // displayRes();
    



}

int acceptNum(void)
{
    int j1;
    printf("Enter the Numbers:: \n");
    scanf("%d", &j1);
    return j1;

}

void displayRes(int z1)
{
    printf(" RESULT IS = %d", z1);
}

int add(int c1, int c2)
{
    int ad= c1+c2;
    displayRes(ad);
    //return c1+c2;
}

int sub(int d1, int d2)
{
    int ans;
    ans = d1-d2;
    return ans;
}

void mul(int g1, int g2)
{
    int result;
    result= g1*g2;
    printf("Result of Multiplication is :: %d", result);
}

int div(int h1, int h2)
{
    int div;
    div = h1 / h2;
    return div;

}


