#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[15];
    printf("Enter 15 Numbers\n");
    for(int i=0; i<15 ; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0; i<14; i++)
    {
        for(int j=0; j<14-i; j++)
        {
            if(arr[j]>arr[j+1])
            {

                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }

        }
    }

     printf("Array after sorting\n");
    for(int i=0; i<15 ; i++)
    {
        printf("%d, ",arr[i]);
    }
    return 0;
}
