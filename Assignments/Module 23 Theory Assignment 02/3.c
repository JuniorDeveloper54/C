#include<stdio.h>
#include<string.h>
int main()
{
    char s[50];
    gets(s);
    int flag=1;
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='1' && s[i]=='9' && s[i]=='9' && s[i]=='7')
        {
            flag=0;
        }
    }
    if(flag==0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }


    return 0;
}
