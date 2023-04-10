#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,sumd1=0,sumd2=0;
    int flag=0,sumr=0,sumc=0;
    //taking inputs
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    //calculation starts here
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i==j) //row=col
            {
                sumd1+=a[i][j];
            }
            if(i+j==3-1)
            {
                sumd2+=a[i][j];
            }
        }
    }
    //flag changing iteration
    if(sumd1!=sumd2)
    {
        flag=1;
    }
    else
    {
        for(i=0; i<3; i++)
        {

            sumc=0;
            sumr=0;
            for(j=0; j<3; j++)
            {
                sumc+=a[j][i];
                sumr+=a[i][j];
            }
            if(sumc!=sumd1)
            {
                flag=1;

            }
            else if(sumr!=sumd1)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
    }
    //final comparison
    if(flag==0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }


    return 0;
}
