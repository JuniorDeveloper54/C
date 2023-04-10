#include<stdio.h>

int add(int n,int a[]);
int main()
{
    int a[]={10,10,10,10,10,10,10};
    int i;
    int sum=add(7,a);
    printf("%d",sum);

    return 0;
}
int add(int n,int a[])
{
    int sum=0,i;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
