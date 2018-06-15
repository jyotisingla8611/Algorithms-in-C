#include<stdio.h>
void main()
{
    struct student
    {
        int rno;
        float marks;
        float fee;
    };
    struct student s1,s2,*p1,*p2;
    p1=&s1;
    p2=&s2;
    printf("enter roll no of student 1 : \n");
    scanf("%d",&p1->rno);
    printf("%d is roll no of stud 1\n",p1->rno);
    printf("%d is roll no of stud 1\n",*(&p1->rno));
}
