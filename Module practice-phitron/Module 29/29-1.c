#include<stdio.h>
//29.1 to 29.3
struct Student
{
    int roll;
    int age;
    float weight;
    char name[50];
};
int main()
{
    int a;
    //struct Student s1;
    //scanf("%d %d %f %s",&s1.roll,&s1.age,&s1.weight,&s1.name);
    struct Student s2 = {48, 48, 80.5, "Lotifur"};
    struct Student s1 = {.weight=48, .roll = 12,.weight=52.53, .name="Shabbir",.age=20};
//    s.roll=12;
//    s.age=24;
//    s.weight=75.5;
//    s2.roll=12;
//    s2.age=24;
//    s2.weight=75.5;
    printf("%d %d %f %s\n",s1.roll,s1.age,s1.weight,s1.name);
    printf("%d %d %f %s\n",s2.roll,s2.age,s2.weight,s2.name);

    return 0;
}
