#include<stdio.h>
#include<math.h>


int factorial(int x);
int main()
{
    int a,ans;
    scanf("%d",&a);
    ans=factorial(a);
    printf("%d",ans);
    return 0;
}

//functions
int factorial(int x)
{
    int i,fact=1;

    for(i=1;i<=x;i++)
    {
        fact*=i;
    }
    return fact;
}
