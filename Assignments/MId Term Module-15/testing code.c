#include<stdio.h>
int main(){
    char sen[20];
    fgets(sen,(sizeof(sen)),stdin);
    //printf("%s",sen);
    int i=0,count=0;
    while(sen[i]!='\0'){
        if(sen[i]=='a'){
            count++;
        }
        i++;
    }
    printf("%d",count);

return 0;
}
