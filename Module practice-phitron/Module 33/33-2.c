#include<stdio.h>
int main()
{
    FILE *inputFile;
    inputFile=fopen("input.txt","r");
    if(inputFile == NULL)
    {
        printf("NO file found");
        return 0;
    }

    FILE *outputFile;
    outputFile =fopen("output.txt","w");

    while(2)
    {
        char ch = fgetc(inputFile);
        if(ch==EOF)
        {
            break;
        }
        fputc(ch,outputFile);
    }

    return 0;
}
