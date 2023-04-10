#include<stdio.h>
#include<math.h>

int shat_present(int x);
int dgsum(int x);
int last_dig_prime(int x);

int main()
{
    int n;
    scanf("%d",&n);

    if(shat_present(n) && dgsum(n)>10 && last_dig_prime(n)==1)
    {
        printf("Farhan's number\n");
    }
    else
    {
        printf("No\n");
    }


    return 0;
}
int shat_present(int x)
{
    int flag=0;
    while(x!=0)
    {
        int b=x%10;
        if(b==7)
            flag=1;
        x=x/10;
    }
    if(flag==1)
    {
        return 1;
    }
    else
        return 0;


}
int dgsum(int x)
{
    int sum=0;
    while(x!=0)
    {
        int b=x%10;
        sum+=b;
        x=x/10;
    }
    return sum;



}
int last_dig_prime(int x)
{
    int ld=x%10;
    if(ld==2 || ld==3 || ld==5 || ld==7)

        return 1;

    else
        return 0;
}
