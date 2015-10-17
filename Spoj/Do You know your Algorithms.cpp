#include<stdio.h>
main()
{
int t,n;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
if(n%4==0 || n%4==1)
printf("YES\n");
else printf("NO\n");
}
return 0;
}
