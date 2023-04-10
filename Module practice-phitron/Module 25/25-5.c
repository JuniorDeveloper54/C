#include<stdio.h>
void swap(int* a,int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;

}

int main()
{
    int a=10,b=20;

    //printf("%d %d\n",a,b);
    //int temp;
    //temp=a;
    //a=b;
    //b=temp;
    swap(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
