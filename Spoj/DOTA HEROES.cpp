#include<stdio.h>
main()
{
int i,j,t,n,m,d;
scanf("%d",&t);
while(t--)
{
          scanf("%d%d%d",&n,&m,&d);
          i=0;
          while(i<n)
          {
                          scanf("%d",&j);
                          if(j>d && m>0)
                          m-=(j/d);
                          if(m<=0)
                          {
                                  i++;
                                  break;
                          }
                          i++;
          }
          while(i<n)
          {
                    scanf("%d",&j);
                    i++;
          }
          if(m<=0)
          printf("YES\n");
          else
          printf("NO\n");
}
}
          
