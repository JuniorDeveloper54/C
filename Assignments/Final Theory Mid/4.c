#include<stdio.h>
#include<string.h>

void sorting(char a[])
{
    char temp;
    int i,j,len;
    len=strlen(a);

    for(i=0; i<len; i++)
    {
        for(j=0; j<(len-1); j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("%s",a);

}

int main()
{
    char a[30]="aabdorrrs";
    sorting(a);
//    char temp;
//    int i,j,len;
//    len=strlen(a);
//
//    for(i=0;i<len;i++)
//    {
//        for(j=0;j<(len-1);j++)
//        {
//            if(a[j]>a[j+1])
//            {
//                temp=a[j];
//                a[j]=a[j+1];
//                a[j+1]=temp;
//            }
//        }
//    }
//    printf("%s",a);
//https://codescracker.com/c/program/c-program-sort-string.htm#:~:text=C%20Sort%20String%20in%20Ascending%20Order&text=Receive%20any%20string%20using%20gets,less%20than%20the%20string%20length
    return 0;
}

