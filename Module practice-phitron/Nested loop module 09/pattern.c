#include<stdio.h>
int main()
{   //5star in three line
    int i,j;

    for(i=1; i<=5; i++)
    {
        for (j=1; j<=3; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    //5star in trinagle
    int i,j;
    for(i=1; i<=4; i++)
    {
        for (j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }


    return 0;
}
