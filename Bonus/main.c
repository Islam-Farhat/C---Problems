#include <stdio.h>
#include <stdlib.h>

int main()
{
    int matrix1[3][3];
    int matrix2[3][2];
    int arrayCalc[3][2]= {0};
    printf("Enter your first matrix\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("Enetr value at index [%d,%d]\n",i,j);
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("Enter your seconed matrix\n");
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Enetr value at index [%d,%d]\n",i,j);
            scanf("%d",&matrix2[i][j]);
        }
    }
    int sum;
    for (int i = 0; i < 3; i++)
    {
        for(int j=0; j<3; j++)
        {
            sum=0;
            for(int k=0; k<3; k++)
            {
                sum+=matrix1[i][k]*matrix2[k][j];
            }
            arrayCalc[i][j]=sum;
        }
    }

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("%d  ",arrayCalc[i][j]);
        }
        printf("\n");
    }

    return 0;
}
