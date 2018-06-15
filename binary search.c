#include <stdio.h>
int main()
{
	int a[11]={10,20,22,27,95,101,197,200,300,500,555};
	int beg,mid,end=10,flag=1,i;
	printf("enter the number you want to find");
	scanf("%d,&i");
	for(beg=0;beg<end;beg++)
	{
		flag=0;
		mid=(beg+end)/2;
		printf("%d\n",mid);
		if(i==a[mid])
		{
			flag=1;
			break;
		}
		else if(a[mid]>i)
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
	}
			if(flag==0)

	{
		printf("%d found!!",a[mid]);
	}
	return 0;
}
