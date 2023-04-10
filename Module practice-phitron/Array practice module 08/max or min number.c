#include<stdio.h>
int main(){
    //int N=6;
    int ara[]={12,7,19,26,11,6};
    int i,max;


    for(i=0;i<6;i++){
        //scanf("%d",&ara[i]);
    }
    max=ara[0];
    //printf("%d",max);
    for(i=0;i<6;i++){
        if(ara[i]>max){
            max=ara[i];//ara[i-1] u will get second maximum number.
        }
    }
    printf("max is: %d",max);
    return 0;
}
