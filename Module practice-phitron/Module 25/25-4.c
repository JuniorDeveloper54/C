#include<stdio.h>

int main()
{
    int a=10;
    int* p=&a;
    int** q=&p;
    printf("%d\n",*p);
    printf("%d\n",**q);
    **q=12;
    printf("%d\n",**q);
    printf("value of a->%d\n",**q);

    return 0;
}
