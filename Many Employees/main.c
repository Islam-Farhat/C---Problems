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
    printf("\n%d",Param.id);
    printf("\n%s",Param.name);
    printf("\n%d",Param.id);
    printf("\n%f",Param.salary);
    printf("\n%f",(Param.commission+Param.salary)-Param.deduction);
}

int main()
{
    struct Employee employees[3];
    for(int i=0; i<3; i++)
    {
        printf("%d- Employee Id : ",i);
        scanf("%i",&employees[i].id);
        _flushall();

        printf("\n%d- Employee Name: ",i);
        gets(employees[i].name);
        _flushall();

        do
        {
            printf("\n%d- Employee Age: ",i);
            scanf("%i",&employees[i].age);
        }
        while(employees[i].age<=18 || employees[i].age>=60);
        _flushall();

        printf("\n%d- Employee Salary: ",i);
        scanf("%f",&employees[i].salary);
        _flushall();

        printf("\n%d- Employee Commission: ",i);
        scanf("%i",&employees[i].commission);
        _flushall();


        printf("\n%d- Employee Deduction: ",i);
        scanf("%i",&employees[i].deduction);

    }


    for(int i=0;i<3;i++)
    {
         PrintEmployee(employees[i]);
    }



    return 0;
}
