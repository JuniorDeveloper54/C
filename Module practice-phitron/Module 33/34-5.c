#include<stdio.h>
int main()
{
    FILE *inputFile=inputFile = fopen("input.txt","r");
    FILE *outputFile=outputFile = fopen("output.txt","w");
    //its a good prctice je input file ase kina
    if(inputFile == NULL)
    {
        printf("NOT found");
        return 0;
    }

    int n;
    fscanf(inputFile,"%d",&n);
    fprintf(outputFile,"%d",n);

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}
