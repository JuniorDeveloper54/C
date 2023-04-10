#include<stdio.h>

struct Student
{
    double weight;//jetar size boro seta age dite hobe its a good practice.
    int roll;

};
int main()
{
    struct Student s[10];
for(int i=0;i<10;i++)
{
    s[i].roll = 11+i;
    s[i].weight = 55.9+i;

}
for(int i=0;i<10;i++)
{
    printf("roll is:%d\nweight is:%f\n",s[i].roll,s[i].weight);
}

//    s[1].roll = 12;
//    s[1].weight = 65.9;
//
//    s[2].roll = 13;
//    s[2].weight = 75.9;

    return 0;
}

