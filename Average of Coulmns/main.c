#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][4];float sum[4]={0};
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf("Enetr value at index %d,%d\n",i,j);
            scanf("%d",&arr[i][j]);
            sum[j]+=arr[i][j];
        }
    }

    for(int i=0; i<4;i++)
    {
         printf("sum of col %i is %f\n",i,sum[i]/3);
    }

    return 0;
}
