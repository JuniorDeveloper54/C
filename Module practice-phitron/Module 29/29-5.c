#include<stdio.h>

struct student
{
    double weight;//jetar size boro seta age dite hobe its a good practice.
    int roll;

};
int main()
{
    struct student s = {.roll = 12, .weight = 85.23};
    struct student* sp;
    sp = &s;

    printf("%d %lf\n",sp->roll, sp->weight);
    return 0;
}

