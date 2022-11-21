#include <stdio.h>
#include <stdlib.h>

int main()
{

    char array[51];

    printf("Enter your string:  ");
    int i=0;
    while((array[i++]=getche())!=13)
    {

    }
    printf("\n");
    while(i!=0)
    {
        printf("%c",array[--i]);

    }
    return 0;
}
