#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int i=0,count=0,j;
    printf("Enter the string: ");
    gets(str);
     puts(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a' || str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u' ||str[i]=='A' ||str[i]=='E' ||str[i]=='I' ||
           str[i]=='O' ||str[i]=='U' )
        {
            count++;
        }
        i++;
    }
    printf("\n The number of vowels are %d",count);
}
