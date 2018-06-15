#include<stdio.h>
#include<string.h>
void main()
{
    char s[100],s1[100];
    int i=0;
    gets(s);
    puts(s);
    strcpy(s1,s);
   strrev(s1);

   if (strcmp(s,s1) == 0)
      printf("Entered string is a palindrome.\n");
   else
      printf("Entered string is not a palindrome.\n");

}
