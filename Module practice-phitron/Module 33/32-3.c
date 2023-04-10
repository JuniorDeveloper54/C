#include<stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;

    inputFile = fopen("input.txt","r");
    outputFile = fopen("output.txt","w");
    if(inputFile == NULL)
    {
        printf("NOT found");
        //fprintf(outputFile,"NOT found");
        return 0;
    }



    int n;
    fscanf(inputFile,"%d",&n);

    int sum=0;
    for(int i=0;i<n;i++)
    {
        int a;
        fscanf(inputFile,"%d",&a);
        sum+=a;
    }

    fprintf(outputFile,"Tomar sum=%d\n",sum);
    return 0;
}

