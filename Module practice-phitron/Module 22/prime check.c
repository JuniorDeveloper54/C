#include<stdio.h>

int prime_check (int x);

int main()
{
    int n;
    scanf("%d",&n);
    if(prime_check(n)==1)
    {
        printf("Prime Number");
    }
    else
        printf("Composite Number");
    return 0;
}
int prime_check (int x)
{
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
