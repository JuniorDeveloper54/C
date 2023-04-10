#include<stdio.h>
#include<math.h>


int calculation(int x, int y);
int main()
{
    int a,b,ans;//here ans will be float
    scanf("%d%d",&a,&b);

    ans=calculation(a,b);
    printf("%d is the answer.",ans);//%f



    return 0;
}
int calculation(int x, int y)//for making float change int calculation to float calculation.
{
    int final_ans;

    int div=x-3;
    if(div<0)
    {
        div=-1*div;
    }

    int add= (y+4)*(y+4);

    final_ans=sqrt(div+add);

    return final_ans;
}
