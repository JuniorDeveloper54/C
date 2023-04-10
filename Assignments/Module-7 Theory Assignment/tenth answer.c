#include <stdio.h>

int main()
{
    int num,counter,prime=0;
    scanf("%d",&num);

    for(counter=2; counter<=num/2; counter++){
        if((num % counter)==0){
            prime=1;
            break;
        }
    }
 if (prime==0){
    printf("Prime",num);
 }else{
    printf("Composite",num);
 }
    return 0;
}
