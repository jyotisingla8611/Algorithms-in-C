#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100],c[100];
	int l,i=0,j,k,flag=0,len;
	gets(a);
	gets(b);
	gets(c);
	l=strlen(a);
	len=strlen(c);
	for(i=0;i<len;i++)
	{
		if(a[0]==c[i])
		{
			k=i;
			for(j=1;j<l;j++)
			{
				if(a[j]==c[k+1])
				flag=1;
				else
				{
					flag=0;
					break;
				}
				k++;
			}

		}
		if(flag==1)
		{
	       	for(j=0;j<l;j++)
			{
				printf("%c",b[j]);
			}
	       i=i+l-1;
	   }
			else
		printf("%c",c[i]);
		flag=0;
	}


}
