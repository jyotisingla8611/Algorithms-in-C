#include<stdio.h>
#include<string.h>
void main()
{
    char names[100][100],temp[100];
    int i=0,j=0,n;
    printf("Enter teh number of names : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf(" \n name of studen %d : ",i+1);
        scanf("%s",&names[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(strcmp(names[j],names[j+1])>0)
            {
               strcpy(temp,names[j]);
                strcpy(names[j],names[j+1]);
               strcpy(names[j+1],temp);
            }
        }
    }
    printf("\n NAMES OF STUDENTS IN A DICTIONARY ORDER\n");
    for(i=0;i<n;i++)
    puts(names[i]);
}

