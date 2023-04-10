#include<stdio.h>
int sumrecur(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return sumrecur(n-1)+n;//sum using recursion
    }
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",sumrecur(a));

    return 0;
}
