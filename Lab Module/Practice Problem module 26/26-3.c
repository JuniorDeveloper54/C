#include<stdio.h>

int sod(int n);
int is_prime(int n);

int main()
{
    int n=123;
    //int sum_of_digit=sod(n);
    if(is_prime(sod(n))==1)//function er vetor function
        printf("Farhan's Number");
    else
        printf("NO");

    return 0;
}
int sod(int n)
{
    int sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
}
int is_prime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
            return 0;//think here when u come here again.
    }
    return 1;
}
