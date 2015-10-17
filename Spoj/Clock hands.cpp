#include<stdio.h>
#include<string.h>
main()
{
int n,t1,t2;
char a[10],b[10];
scanf("%d",&n);
while(n--)
{
         scanf("%s%s",&a,&b);
         t1=(((a[0]-48)*10)+(a[1]-48))*60+((a[3]-48)*10+(a[4]-48));
         t2=(((b[0]-48)*10)+(b[1]-48))*60+((b[3]-48)*10+(b[4]-48));
         t1=(t2*11)/720-(t1*11)/720;
         printf("%d\n",t1);
}
return 0;
}
