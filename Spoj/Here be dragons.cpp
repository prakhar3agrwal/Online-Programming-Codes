#include<stdio.h>
main()
{
char x[400000];
int t,n,i,f;
scanf("%d",&t);
while(t--)
{
          scanf("%s",&x);
          i=0;f=0;
          while(x[i]!='\0')
          {
                           if(x[i]=='D')
                           {
                                        printf("You shall not pass!\n");
                                        f=1;
                                        break;
                           }
                           i++;
          }
          if(f==0)
          printf("Possible\n");
}
}
