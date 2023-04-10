#include<stdio.h>

void lar(int x, int y, int* p, int* q)
{
    if(x>y)
    {
        *p=x;
        *q=y;
    }
    else if(x<y)
    {
        *p=y;
        *q=x;
    }
}
int main()
{
    int a=5,b=12;
    int large,small;

    lar(a,b,&large,&small);
    printf("%d %d",large,small);

    return 0;
}
