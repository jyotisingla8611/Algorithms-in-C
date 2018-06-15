int main(){
//nter your code here. Read input from STDIN. Print output to STDOUT */
    int a,b,c;
scanf("%d%d",&a,&b);
c=a&(~(1<<b));
printf("%d",c);    return 0;
    }
