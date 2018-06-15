#include<stdio.h>
struct student
{
    int rollno;
    char name[100];
    int marks;
};
union school
{
    struct student s1;
}set;
int main()
{
    printf("Enter rollno : ");
    scanf("%d",&set.s1.rollno);
    printf("\nROLL NO IS %d",set.s1.rollno);
    return 0;
}
