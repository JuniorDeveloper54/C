#include<stdio.h>
#include<math.h>
int div3(intx);
int div5(intx);
int main()
{
    int n;
    int a[105];

    int count_3=div3();
    int count_5=div5();

    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {

    }
    return 0;
}
int div3(int x)
{
    int a,i,count3=0;
    for(int i=0;i<x;i++)
    {
        if(a[i]%3==0)
        {
            count3++;
        }
    }
    return count3;
}
int div5(int x)
{
    int a,i,count5=0;
    for(int i=0;i<x;i++)
    {
        if(a[i]%5==0)
        {
            count5++;
        }
    }
    return count5;
}
