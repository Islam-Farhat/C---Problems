#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char fName[10];
    char lName[10];
    char fullName[21];
    printf("Enter your first name:  ");
    gets(fName);
    printf("\nEnter your last name:  ");
    gets(lName);
    strcpy(fullName,fName);
    strcat(fullName," ");
    strcat(fullName,lName);
    printf("\nYour name is: ");
    puts(fullName);



    return 0;
}
