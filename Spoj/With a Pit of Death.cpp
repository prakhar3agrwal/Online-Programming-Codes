#include<stdio.h>
#include<string.h>
main()
{
int t,i,k,l;
char a[3000],j[3000];
scanf("%d",&t);
while(t--)
{
          scanf("%d%s%d%s",&i,&a,&k,&j);
          l=strlen(a);
          if(i%2==0 || a[l-1]%2==0)
          printf("Impossible.\n");
          else
          {
              if((j[strlen(j)-1]%2==0 && k%2!=0)||(j[strlen(j)-1]%2!=0 && k%2==0))
              printf("Impossible.\n");
              else
              printf("Possible.\n");
          }
}
return 0;
}
