#include<stdio.h>
int gcd(int m,int n);
int lcm(int m,int n);
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("GCD %d\n",gcd(a,b));
    printf("LCM %d\n",lcm(a,b));

    return 0;
}

int gcd(int m,int n)
{
    int i,gcd;
    for(i=m;i>=1;i--)
    {
        if(m%i==0 && n%i==0)
        {
            return i;
        }
    }

}
/*
int lcm(int m,int n)
{
    int i,lcm;
    for(i=m;i<=(m*n);i++)
    {
        if(i%m==0 && i%n==0)
        {
            return i;
        }
    }

}*/
//efficient way using gcd
int lcm(int m,int n)
{
    return (m*n)/gcd(m,n);
}
