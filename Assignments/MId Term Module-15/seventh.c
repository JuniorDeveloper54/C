#include<stdio.h>
int main()
{
    char s1[101],s2[101];
    int i,flag=0;
    printf("Enter first string: ");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter second string: ");
    fgets(s2,sizeof(s2),stdin);

    int len=strlen(s1)-1;
    for(i=0; i<len; i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
        {
            s1[i]+=32;
        }

        if(s2[i]>='A' && s2[i]<='Z')
        {
            s2[i]+=32;
        }
    }
    for(i=0; i<len; i++)
    {
        if (s1[i]<s2[i])
        {
            printf("Second is greater");
            return 0;
        }
        else if (s1[i]>s2[i])
        {
            printf("First is greater");
            return 0;
        }
    }
    printf("They are equal");

    return 0;
}
