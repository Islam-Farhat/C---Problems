#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    int id;
    char name[10];
    int age;
    float salary;
    int commission;
    int deduction;
};

void PrintEmployee(struct Employee Param)
{
    printf("%d",Param.id);
    printf("\n%s",Param.name);
    printf("\n%d",Param.id);
    printf("\n%f",Param.salary);
    printf("\n%f",(Param.commission+Param.salary)-Param.deduction);
}

int main()
{
    struct Employee emp;
    printf("Employee Id: ");
    scanf("%i",&emp.id);
    _flushall();

    printf("\nEmployee Name: ");
    gets(emp.name);
    _flushall();

    do
    {
        printf("\nEmployee Age: ");
        scanf("%i",&emp.age);
    }
    while(emp.age<=18 || emp.age>=60);
    _flushall();

    printf("\nEmployee Salary: ");
    scanf("%f",&emp.salary);
    _flushall();

    printf("\nEmployee Commission: ");
    scanf("%i",&emp.commission);
    _flushall();

    printf("\nEmployee Deduction: ");
    scanf("%i",&emp.deduction);


    PrintEmployee(emp);
    return 0;
}
