#include<stdio.h>

int main()
{
    int ara[]= {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};
    int i,j,items=6;//if i lees it 11 will gayeb

    for(i=0; i<items-1; i++)
    {
        for (j=0; j<items-1; j++)
        {
            if(ara[j]>ara[j+1])
            {
                int temp=ara[j];
                ara[j]=ara[j+1];
                ara[j+1]=temp;
            }
        }

    }
    for(i=0; i<items; i++)
    {
        printf("%d ", ara[i]);
    }


    return 0;
}
