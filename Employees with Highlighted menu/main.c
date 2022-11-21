#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#define UP 72
#define DOWN 80
#define HOME 71
#define END 79
#define ENTER 13
#define ESC 27
#define NULL -32

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

void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}
void textattr(int i)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);

}
struct Employee employees[10];
int main()
{

    char menu[7][20]= {"New","DisplayAll","DisplayByID","DeleteAll","DeleteByID","DisplayByName","Exit"};
    char ch;
    int flag2=0;
    int cursor=0;
    int flag=1;
    int index;

    do
    {
        system("cls");
        for(int i=0; i<7; i++) //color my text
        {
            if(cursor==i)
            {

                textattr(5);
            }
            else
            {
                textattr(7);
            }
            gotoxy(60,10+i*2);
            _cprintf("%s",menu[i]);
        }
        ch=getch();
        switch(ch)
        {
        case NULL:
            ch=getch();

            switch(ch)
            {
            case DOWN:
                cursor++;
                if(cursor>6)
                {
                    cursor=0;
                }
                break;

            case UP:
                cursor--;
                if(cursor<0)
                {
                    cursor=6;
                }
                break;
            case END:
                cursor=6;
                break;
            case HOME:
                cursor=0;
                break;
            }
            break;

        case ENTER:
            switch(cursor)
            {
            case 0://new page
                system("cls");
                index=0;
                do
                {
                    printf(" \nyour index want to add??: ");
                    scanf("%d",&index);
                    if(index>10||index<0)
                    {
                        printf("\nIndex out of range!");
                    }
                    /*if((employees[index].id!=0)&&(index<10||index>0))
                    {
                        printf("\nIndex Existes!");
                        index=11;
                    }*/
                }
                while(index>10 || index<0 );

                //do
                //{
                    printf(" Employee Id : ");
                    scanf("%i",&employees[index].id);
                    _flushall();
               // }
                //while();

                printf("\n Employee Name: ");
                gets(employees[index].name);
                _flushall();

                do
                {
                    printf("\n Employee Age: ");
                    scanf("%i",&employees[index].age);

                }
                while(employees[index].age<=18 || employees[index].age>=60);
                _flushall();

                printf("\n Employee Salary: ");
                scanf("%f",&employees[index].salary);
                _flushall();

                printf("\n Employee Commission: ");
                scanf("%i",&employees[index].commission);
                _flushall();


                printf("\nEmployee Deduction: ");
                scanf("%i",&employees[index].deduction);

                break;

            case 1://Display ALL

                system("cls");
                for(int i=0; i<10; i++)
                {
                    if(employees[i].id != 0)
                    {
                        PrintEmployee(employees[i]);
                        flag2=1;
                        printf("\n-------------------------");
                    }

                }
                if(flag2==0)
                {
                    printf("Employees Not Found!");
                }
                getch();
                break;

            case 2://Display By ID
                system("cls");

                index=0;
                do
                {
                    printf(" \nyour index want to display?: ");
                    scanf("%d",&index);
                    if(index>10||index<0)
                    {
                        printf("\nIndex out of range!");
                    }

                }
                while(index>10 || index<0 );
                if(employees[index].id!=0)
                {
                    PrintEmployee(employees[index]);
                }
                else
                {
                    printf("Employee Not Existed!");
                }

                getch();
                break;

            case 3: //Delete ALL
                system("cls");
                for(int i=0; i<10; i++)
                {
                    if(employees[i].id!=0)
                    {
                        employees[i].id=0;
                        strcpy(employees[i].name," ");
                        employees[i].age=0;
                        employees[i].salary=0;
                        employees[i].commission=0;
                        employees[i].deduction=0;
                    }
                }
                printf("All Employee Deleted!");
                getch();
                break;

            case 4://Delete by ID
                system("cls");
                index=0;
                do
                {

                    printf(" \nyour index want to Delete it?: ");
                    scanf("%d",&index);
                    if(index>10||index<0)
                    {
                        printf("\nIndex out of range!");
                    }


                }
                while(index>10 || index<0 );
                if(employees[index].id!=0)
                {
                    employees[index].id=0;
                    strcpy(employees[index].name," ");
                    employees[index].age=0;
                    employees[index].salary=0;
                    employees[index].commission=0;
                    employees[index].deduction=0;
                    printf("Employee Deleted.");

                }
                else
                {
                    printf("Employee Not Found!");
                }
                getch();
                break;

            case 5:
                system("cls");

                char name[10]=" ";
                int flag3=0;

                printf(" \nyour name want to display? ");
                scanf("%s",&name);
                for(int i=0; i<10; i++)
                {
                    if((strcmp(name,employees[i].name)==0))
                    {
                        PrintEmployee(employees[i]);
                        flag3=1;
                        break;
                    }

                }
                if(flag3==0)
                    printf("Name not fount!");
                getch();
                break;
            case 6:
                flag=0;
                break;
            }

            break;

        case ESC:
            flag=0;
            break;
        }
    }
    while(flag==1);


    return 0;
}
