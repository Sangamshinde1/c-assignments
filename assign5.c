#include<stdio.h>

int main()
{
    int empid, deptno;
    char dsgn, deptname;
    
    printf("Enter the Employee ID:: ");
    scanf("%d", &empid);
    printf("Enter the Department Number :: ");
    scanf("%d", &deptno);
    getchar();
    printf("Enter the Designation:: ");
    scanf("%c", &dsgn);

    switch(deptno)
    {
        case 10: printf("Employee with employee ID %d is working in Marketing Department as ", empid);
                break;
        
        case 20: printf("Employee with employee ID %d is working in Management Department as", empid);
                break;
        
        case 30: printf("Employee with employee ID %d is working in Sales Department as", empid);
                break;

        case 40: printf("Employee with employee ID %d is working in Designing Department as", empid);
            break;

        default: printf("Invalid Input\n");
                break;

        
    }

    switch (dsgn)
    {
        case 'M': printf(" Manager\n", dsgn);
            break;

        case 'S':printf(" Supervisior\n", dsgn);
            break;

        case 's': printf(" Security Officer\n", dsgn);
            break;

        case 'C': printf(" Clerk\n",dsgn);
            break;

        
    }

    return 0;
}