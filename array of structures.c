#include<stdio.h>
void main()
{
    struct student{
    int rollno;
    char name[50];
    char course[50];
    char temp[23];
    float fee;
    };
    struct student s[10];
    int n,i;
    printf("enter number of students : \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("enter roll no :\n");
        scanf("%d",&s[i].rollno);
        printf("enter name :\n");
        gets(s[i].temp);
        gets(s[i].name);
        printf("enter course :\n");
        gets(s[i].course);
        printf("enter fee :\n");
        scanf("%f",&s[i].fee);
    }
    for(i=0;i<n;i++)
    {
        printf("ROLL NO IS %d\n",s[i].rollno);
        printf("NAME IS %s\n",s[i].name);
         printf("COURSE IS %s\n",s[i].course);
        printf("FEE IS %f\n",s[i].fee);
    }
}
