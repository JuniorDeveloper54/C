#include<stdio.h>
#include<string.h>
int main()
{
    int n,k;
    int last[100];
    int even[50];
    int odd[50];
    int idx=0;
    scanf("%d%d",&n,&k);
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            even[i]=i;
        }
        else if(i%2!=0)
        {
            odd[i]=i;
        }
    }


    for(int i=1;i<=n;i++)
    {
        printf("%d ",last[i]);
    }

    return 0;
}

