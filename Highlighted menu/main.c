#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <windows.h>

#define UP 72
#define DOWN 80
#define HOME 71
#define END 79
#define ENTER 13
#define ESC 27
#define NULL -32




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
int main()
{
    char menu[4][10]= {"New","Display","Files","Exit"};
    char ch;
    int cursor=0;
    int flag=1;
    do
    {
        system("cls");
        for(int i=0; i<4; i++) //color my text
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
                if(cursor>3)
                {
                    cursor=0;
                }
                break;

            case UP:
                cursor--;
                if(cursor<0)
                {
                    cursor=3;
                }
                break;
            case END:
                cursor=3;
                break;
            case HOME:
                cursor=0;
                break;
            }
            break;

        case ENTER:
            switch(cursor)
            {
            case 0:
                system("cls");
                printf("This New Page");
                printf("\nPress any this to exit this page");
                getch();
                break;

            case 1:
                system("cls");
                printf("This Display Page");
                printf("\nPress any this to exit this page");
                getch();
                break;

            case 2:
                system("cls");
                printf("This Files Page");
                printf("\nPress any this to exit this page");
                getch();
                break;

            case 3:

                flag=2;
                break;
            }

            break;

        case ESC:
            flag=2;
            break;
        }
    }
    while(flag==1);


    return 0;
}
