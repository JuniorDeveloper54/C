#include<stdio.h>
int main()
{
    FILE *logFile = fopen("log.txt","a");//a mode er jonnow sob history thaktece
    FILE *inputFile = fopen("habibi.txt","r");
    if(inputFile == NULL)
    {
        fprintf(logFile,"Nai re vai 10.30\n");
        return 0;
    }
    //fprintf(logFile,"Hello at 12:20 AM\n");
    return 0;
}
