#include <stdio.h>

int main()
{
    int num1,num2,n1,n2,rem,gcd,lcm;
    scanf("%d%d",&num1,&num2);

    n1=num1;
    n2=num2;
    //printf("%d%d hello",a,b);

    while(n2!=0){
      rem=n1%n2;
      n1=n2;
      n2=rem;
    }
    //printf("GCD %d\n",a);
    gcd=n1;
    //printf("LCM %d",gcd);
    lcm=(num1*num2)/gcd;
    printf("The LCM of %d and %d is %d.",num1,num2,lcm);
    return 0;
}
