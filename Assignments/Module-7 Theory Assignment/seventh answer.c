#include <stdio.h>

int main()
{
    int a,b,c,d,gcd,rem;

    scanf("%d%d",&a,&b);
    //printf("%d%d hello",a,b);

//i take two more variables otherwise my main inputs are changing after all the calculation. Here I am doing all my calculations with c and d.
    c=a;
    d=b;
    while(d!=0){
      rem=c%d;
      c=d;
      d=rem;
    }
    gcd=c;
    //printf("%d",gcd);
    printf("The GCD of %d and %d is %d.",a,b,gcd);
    return 0;
}
