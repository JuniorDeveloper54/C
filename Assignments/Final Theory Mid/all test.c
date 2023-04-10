#include<stdio.h>
struct student
{
    char name[100];
    int  roll;
    int marks;
};
int main()
{
    struct  student s;
    printf("Enter The Information of students :]\n");

    printf("Enter Name: ");
    scanf("%s",s.name);

    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter marks : ");
    scanf("%d", &s.marks);

    printf("\nDisplaying Information\n");

    printf("Name:%s\n",s.name);
    printf("Roll:%d\n",s.roll);
    printf("Marks: %.d\n",s.marks);
    return 0;

}
