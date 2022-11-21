#include<stdio.h>
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
    int size=3;
    int col;
    int row;

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
                    row=3;
            }
            if(col<1){
                    col=3;
            }
        }
        else
        {
            row++;
            if(row>3){
                    row=1;
            }
        }
    }

    return 0;
}
