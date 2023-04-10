#include<stdio.h>
int main(){
    int n,x,i;
    int ara[200001];
    scanf("%d",&n);

    for(i=1;i<n;i++){
        scanf("%d",&x);
        ara[x]=1;
    }
    for (i=1;i<=n;i++){
        if(ara[i]==0){
            printf("%d\n",i);
            //break;
        }
    }
    return 0;
}
