#include<stdio.h>
int main()
{
    int num,calculating_num,r,sum=0;
    scanf("%d",&num);
    calculating_num=num;

    while(calculating_num!=0)
    {
        r=calculating_num%10;
        sum+=r;
        calculating_num=calculating_num/10;
    }
    printf("%d",sum);

    return 0;
}
