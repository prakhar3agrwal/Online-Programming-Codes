#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[][10]={"pop", "no", "zip", "zotz", "tzec", "xul", "yoxkin", "mol", "chen", "yax", "zac", "ceh", "mac", "kankin", "muan", "pax", "koyab", "cumhu","uayet"};
char b[][15]={"imix", "ik", "akbal", "kan", "chicchan", "cimi", "manik", "lamat", "muluk", "ok", "chuen", "eb", "ben", "ix", "mem", "cib", "caban", "eznab", "canac", "ahau" };
int i,j,k,t,d,y,num,d1,m;
char c[10],e[10];
scanf("%d",&t);
printf("%d\n",t);
while(t--)
{
          num=0;
          scanf("%d%s%s%d",&d,&e,&c,&y);
          for(i=0;i<19;i++)
          {
                           if(strcmp(c,a[i])==0)
                           break;
          }
          num=(i*20)+(d+1)+(y*365);
          y=num/260;
          if(num%260==0)
          y--;
          d=num%260;
          if(d==0)
          d=260;
          d1=d%13;
          if(d1==0)
          d1=13;
          m=d%20;
          if(d%20==0)
          m=20;
          m--;
          printf("%d %s %d\n",d1,b[m],y);
}
}
          
