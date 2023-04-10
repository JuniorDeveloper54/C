#include <stdio.h>

int main()
{
    int a=5, b=13;

//Write code here
    int blank;
    blank = a;
    a = b;
    b = blank;
//End of code

    printf("%d and %d", a, b);

    return 0;
}

