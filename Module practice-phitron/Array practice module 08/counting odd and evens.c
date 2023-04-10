#include<stdio.h>
int main()
{
    int n,i;
    int ara[100];
    scanf("%d",&n);

    int oddcount=0;
    int evencount=0;


    for(i=0; i<n; i++)
    {
        scanf("%d",&ara[i]);
    }

    for (i=0; i<n; i++)
    {
        if(ara[i]%2==0)
        {
            evencount+=1;
        }
        else
        {
            oddcount+=1;
        }
    }

    printf("Total even numbers are: %d\n",evencount);
    printf("Total odd numbers are: %d",oddcount);


    return 0;
}
