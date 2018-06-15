#include<stdio.h>
#include<string.h>
void  main()
{
    char s[100];
    int i=0,j=0;
    printf("ENtr string: ");
    scanf("%c",&s[i]);
    while(s[i]!= '*')
    {
        i++;
        scanf("%c",&s[i]);
    }
    s[i]='\0';
    printf("\nthe string is :%s ",s);
    while(s[j]!=0)
    {
        printf("%c",s[i]);
        j++;
    }
    printf("\nnumber of chars are : %d ",j);
}

