#include <stdio.h>
#include <stdlib.h>
int Add(int a,int b)
{
    return a+b;
}
int Sub(int a,int b)
{
    return a-b;
}
 float Div(int a,int b)
{
    return (float)a/b;
}
int main()
{
    char ch;int a,b;
    printf("Enter your Process +,-,/");
    scanf("%c",&ch);
    _flushall();
    printf("Enter your Num1\n");
    scanf("%d",&a);
    switch(ch)
    {
    case '+':
        printf("Enter your Num2\n");
        scanf("%d",&b);
        printf("%d",Add(a,b));
        break;
    case '-':
        printf("Enter your Num2\n");
        scanf("%d",&b);
        printf("%d",Sub(a,b));
        break;
    case '/':
        do
        {
            printf("Enter your Num2\n");
            scanf("%d",&b);

        }
        while(b==0);
        printf("%f",Div(a,b));
        break;
    }



    return 0;
}
