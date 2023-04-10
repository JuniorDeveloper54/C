#include<stdio.h>

int is_leap(int n)
{
    if((n%400==0) || (n%4==0 && n%100!=0))
        return 1;
    else
        return 0;
}

int is_distinct(int n)
{
    int ld;
    int count_digit[10]={0,0,0,0,0,0,0,0,0,0};
    while(n>0)
    {
        ld=n%10;
        count_digit[ld]++;
        n/=10;
    }
    for(int i=0;i<10;i++)
    {
        if(count_digit[i]>1)
            return 0;
    }
    return 1;
}

int main()
{
    int a;
    scanf("%d",&a);
//    int b=is_distinct(is_leap(a));
    if(is_leap(a)==1 && is_distinct(a)==1)
        printf("It's a distinct leap year.");
    else
        printf("NO");
    return 0;
}
