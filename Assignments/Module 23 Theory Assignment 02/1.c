#include<stdio.h>
#include<string.h>
int main()
{
    char s[21];
    gets(s);
    //getchar();
    for(int i=0; i<strlen(s); i++)
    {
        if('A'<=s[i] && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        else
        {
            s[i]=s[i]-32;
        }
    }
    printf("%s",s);
    return 0;
}

