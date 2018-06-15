#include<stdio.h>
struct student
{
    char name[100];
    int rollno;
    float marks;
};
void read(struct student s[]);
void display(struct student s[]);
int main()
{
    struct student s[3];
    read(s);
    display(s);
    return 0;
}
void read(struct student s[3])
{
    int i;
    for(i=0;i<3;i++)
    {
     printf("\n Enter details : ");
     printf("\n Enter name : ");
     gets(s[i].name);
     printf("\n Enter rollno : ");
     scanf("%d",&s[i].rollno);
     printf("\n Enter marks : ");
     scanf("%f",&s[i].marks);
     getchar();
    }
}
void display(struct student s[3])
{
    int i;
    for(i=0;i<3;i++)
    {
     printf("\n Details are : ");
     printf("name is %s \n",s[i].name);
     printf("roll no is %d \n",s[i].rollno);
     printf("marks is %f \n",s[i].marks);
    }
}
