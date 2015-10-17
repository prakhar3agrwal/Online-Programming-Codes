#include<stdio.h>
#include<string.h>
main()
{
int n,num,s;
char a[10];
scanf("%d",&n);
while(n--)
{
          scanf("%d",&num);s=0;
          while(num--)
          {
                      scanf("%s",a);
                      if(strcmp(a,"lxh")==0)
                      s++;
          }
          if(s%2!=0)
          printf("lxh\n");
          else
          printf("hhb\n");
}
}
