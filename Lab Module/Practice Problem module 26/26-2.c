#include<stdio.h>
void maxmin(int n, int num[], int* p,int*q)
{
    *p=num[0];
    *q=num[0];
    for(int i=0;i<n;i++)
    {
        if(num[i]>*p)
        {
            *p=num[i];
        }
        if(num[i]<*q)
            *q=num[i];
    }
}
int main()
{
    int ara[]={12,13,14,15,16,17,18};
    //printf("%d",sizeof(ara)/sizeof(int));
    int n=7;
    int maxx,minn;

    maxmin(n,ara,&maxx,&minn);
    printf("%d %d",maxx,minn);
    return 0;
}

