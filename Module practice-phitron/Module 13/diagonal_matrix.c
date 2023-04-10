#include<stdio.h>
int main()
{
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
//    for(int i = 0; i < r; i++)
//    {
//        for(int j = 0; j < c; j++)
//        {
//            printf("%d ",arr[i][j]);
//        }
//        printf("\n");
//    }
    //checking square or not
    if(r == c)
    {
        int ans = 1;
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                if(i==j)
                {
                    continue;
                }
                else
                {
                    if(arr[i][j] != 0)
                    {
                        ans = 0;
                        break;
                    }
                }
            }
        }
        if(ans == 1)
            printf("This is a diagonal\n");
        else
            printf("This is not a diagonal");
    }
    else
    {
        printf("Not a diagonal\n");
    }
    return 0;
}


/*
A diagonal matrix

3 3
3 0 0
0 1 0
0 0 4

or

1 0 0 0
0 1 0 0
0 0 1 0
0 0 0 1
*/
