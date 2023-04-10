#include<stdio.h>

int odev(int x);

int main()
{
    int x;
    scanf("%d",&x);
    int ans=odev(x);
    if(ans==1)
    {
        printf("Odd");
    }
    else{
        printf("Even");
    }

    return 0;
}
int odev(int x)
{
    if(x%2==0){
        return 0;
    }
    else
        return 1;
}
/*
with void

void odev(int x)
{
    if(x%2==0)
    {
        printf("even");
    }
    else
        printf("Odd");
}
