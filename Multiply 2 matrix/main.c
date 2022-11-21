#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix1[3][2];
    int matrix2[2][1];
    int arrayCalc[3][1]={0};
    printf("Enter your first matrix\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Enetr value at index %d,%d\n",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter your seconed matrix\n");
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<1; j++)
        {
            printf("Enetr value at index %d,%d\n",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for(int j=0; j<2; j++)
        {
            arrayCalc[i][0]+=matrix1[i][j]*matrix2[j][0];
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<1; j++)
        {
            printf("%d\n",arrayCalc[i][j]);
        }
    }

    return 0;
}
