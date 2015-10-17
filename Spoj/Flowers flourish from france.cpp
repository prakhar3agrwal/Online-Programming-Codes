#include<stdio.h>
#include<string.h>
main()
{
char a[10000];
int l,x,y,f,i;
while(1)
{
        gets(a);
        if(strcmp(a,"*")==0)
        break;
        l=strlen(a);
        i=0;f=0;
        while(a[i]!='\0')
        {
                         if(i==0)
                         x=a[0];
                         else if(a[i]==' ')
                         {
                              y=a[i+1];
                              if(y==x || y-x==32 || x-y==32)
                              f=0;
                              else
                              {
                                  f=1;
                                  break;
                              }
                         }
                         i++;
        }
        if(f==1)
        printf("N\n");
        else
        printf("Y\n");
}
}
