#include<stdio.h>

struct employee
{
    char name[20] ;
    int empId ;
    float salary ; 
} ;

int main()
{
    struct  employee e ;

    printf("Enter the details :-\n") ;
    printf("Enter Name : ") ;
    scanf("%s", &e.name) ;
    printf("Enter Employee Id : ") ;
    scanf("%d", &e.empId) ;
    printf("Enter Salary : ") ;
    scanf("%f", &e.salary) ;

    printf("\nInfo is :-\n") ;
    printf("Name is %s\n", e.name) ;
    printf("Employee id is %d\n", e.empId) ;
    printf("Salary is %0.2f\n", e.salary) ;


    return 0 ;
}

