#include<stdio.h>
int gcd(int a, int b)
{
	if (b==0)
		return a;
	else
		return gcd(b,a%b);
}
main()
{
char b[260];
int i,r,t,a;
scanf("%d",&t);
while(t--)
{
          scanf("%d%s",&a,&b);r=0;
          if(a!=0)
          {
                  i=0;
                  while(b[i]!='\0')
                  {
                                   r=(r*10+(b[i]-48))%a;
                                   i++;
                  }
                  printf("%d\n",gcd(a,r));
          }
          else
          printf("%s\n",b);
}
return 0;
}
