#include<stdio.h>
int main()
{
    int n,  a = 0,  b = 1, c, i;
    scanf("%d",&n);
    for ( i = 1 ; i <= n ; i++ )
    {
        printf("%d",a);
        if(i<n)
        {
            printf("%, ");
            c = a + b;
            a = b;
            b = c;
        }
    }
    //https://www.youtube.com/watch?v=98VEfs5oEU8
    return 0;
}
