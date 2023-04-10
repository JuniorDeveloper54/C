#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,d,root;
    scanf("%lf%lf%lf",&a,&b,&c);
    if (a == 0)
    {
        printf("Invalid");
    }
    d=b*b-4*a*c;

    root=sqrt(d);
    int Root;
    Root=root;

    if(d<0)
    {
        printf("Complex\n");
    }
    else if (d == 0)
    {
        printf("Real and equal\n");
    }

    else if (d > 0 && root==Root)
    {
        printf("Real, unequal, and rational\n");
    }
    else
    {

        printf("Real, unequal, and irrational\n");
    }



    return 0;
}
