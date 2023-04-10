#include <stdio.h>

int main() {
int i,large,small;
large=-9999;
small=9999;
printf("Enter your Distinct Numbers\n");

for(i=1; i<=4; i++){
    int a;
    scanf("%d",&a);
    if (a>large){
        large=a;
    }
    if(a<small){
        small=a;
    }

}
printf("Largest = %d\n",large);
printf("Smallest = %d",small);
    return 0;
}

