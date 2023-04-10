#include<stdio.h>
struct Student
{
    int roll;
    char name[50];
    int marks;
};

void PrintStu(int n,struct Student s)
{
    printf("Info of student %d\n",n);
    printf("%d\n",s.roll);
    printf("%s\n",s.name);
    printf("%d\n",s.marks);
}

int main()
{
    struct Student cls[5];

    for(int i=1; i<=3; i++)
    {
        scanf("%d",&cls[i].roll);
        scanf("%s",cls[i].name);
        scanf("%d",&cls[i].marks);
    }
    for(int i=1; i<=3; i++)
    {
        if((cls[i].roll)%2==0)
        {
            PrintStu(i,cls[i]);
        }
    }
    return 0;
}
/*
5
lotifur
50

10
shabbir
100

22
Boro_vai
55
*/
