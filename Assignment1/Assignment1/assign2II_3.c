#include <stdio.h>
int main() 
{
    int employee_id, dept_no;
    char dsgn_code;
    printf("Enter Employee Id: ");
    scanf("%d", &employee_id);

    printf("Enter Department No: ");
    scanf("%d", &dept_no);

    printf("Enter Designation Code: ");
    scanf(" %c", &dsgn_code);

    printf("Employee with employee id %d is working in \"", employee_id);
    
    switch (dept_no) 
	{
        case 10: 
            printf("Marketing");
            break;
        case 20: 
            printf("Management");
            break;
        case 30: 
            printf("Sales");
            break;
        case 40: 
            printf("Designing");
            break;
          default: 
            printf("Unknown Department");
            break;
    }
    printf("\" department as \"");
    switch (dsgn_code) 
	{
        case 'M': 
            printf("Manager");
            break;
        case 'S': 
            printf("Supervisor");
            break;
        case 'C': 
            printf("Clerk");
            break;
		case 's':
			printf("Security officer");
       default: 
            printf("Unknown Designation");
            break;
    }
    printf("\".\n");
    return 0;
}
