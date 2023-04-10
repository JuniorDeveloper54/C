#include<stdio.h>
#include<math.h>
int main()
{
    int ara[16];
    int n=15;
    for(int i=1; i<=n; i++)
    {
        //printf("%d ",ara[i]);//checking garbage value
        ara[i]=pow(2,i-1);

    }
    for(int i=1; i<=n; i++)
    {
        printf("%d ",ara[i]);

    }
    return 0;
}
