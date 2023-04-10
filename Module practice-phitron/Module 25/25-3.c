#include<stdio.h>
int main()

{
    int a=-5;
    int* p=&a;

    *p=7;

    //printf("%d",*p);
    printf("%d",a);

    return 0;
}
