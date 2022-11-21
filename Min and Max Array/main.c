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
    int min = arr[0];
    int max = arr[0];
    for(int i=0; i<15 ; i++)
    {
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("Min %d",min);
    printf("\nMax %d",max);
    return 0;
}
