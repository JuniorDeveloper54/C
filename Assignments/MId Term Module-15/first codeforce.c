#include<stdio.h>
int main()
{
    int t;
    int a,b,c;
    scanf("%d",&t);
    if(1<=t<=9261)
    {
        for(int i=0; i<t; i++)
        {
            scanf("%d%d%d",&a,&b,&c);
            if(0<= a,b,c <=20)
            {
                if(a+b==c || b+c==a || c+a==b)
                {
                    printf("YES\n");
                }
                else
                {
                    printf("NO\n");
                }
            }

        }
    }




    return 0;
}
