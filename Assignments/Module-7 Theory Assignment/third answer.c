#include <stdio.h>
int main()
{
    long long int num, digit,count=0;
    scanf("%lli",&num);

    while(num>0){

        digit=num%10;
        count+=1;
        num=num/10;
    }
    printf("%lli digits",count);
    return 0;
}

