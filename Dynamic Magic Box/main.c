#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


void gotoxy( int column, int line )
{
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle( STD_OUTPUT_HANDLE ),coord);
}

int main()
{

    int size;
    int col;
    int row;
    do{
    printf("please enter your size");
    scanf("%i",&size);
    }while(size % 2 == 0||size<2);
    system("cls");
    row=1;
    col=size/2+1;

    for(int i=1;i<=size*size;i++)
    {
        gotoxy(col*3,row*3);
        printf("%d",i);

        if(i%size!=0)
        {
            row--;
            col--;
            if(row<1){
                    row=size;
            }
            if(col<1){
                    col=size;
            }
        }
        else
        {
            row++;
            if(row>size){
                    row=1;
            }
        }
    }
    return 0;
}
