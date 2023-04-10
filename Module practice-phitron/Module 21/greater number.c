#include<stdio.h>

int greater(int x,int y, int z)
{
    if(x>y && x>z)
    {
        return x;
    }
    else if(y>z && y>x)
    {
        return y;
    }
    else if(z>x && z>y)
    {
        return z;
    }
    else if(x=y=z)
    {
        return 1;
    }
}


int main()
{

    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int answer;
    answer=greater(a,b,c);
    if(answer==1)
    {
        printf("All numbers are equal.\n");
    }
    else
    {
        printf("%d is greater.",answer);
    }

    return 0;
}
