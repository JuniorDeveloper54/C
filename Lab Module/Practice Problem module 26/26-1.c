#include<stdio.h>
void hash(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("#");
    }
    printf("\n");
}

int main()
{
    int n=5;
    for(int i=1;i<=n;i++)
    {
        hash(i);
    }
    return 0;
}
