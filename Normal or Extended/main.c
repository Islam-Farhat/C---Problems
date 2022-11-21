#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch='1';
     while(ch!=27)
    {
        printf("\nEnter your character:  ");
        ch=getche();
        switch(ch)
        {

        case -32:
            ch=getch();
            printf("\n Extended ASCII: ");
            printf("%i",ch);
            break;
        default:
            printf("\n Normal ASCII: ");
            printf("%i",ch);
            break;
        }
        printf("\n---------------------------");
    }

    return 0;
}
