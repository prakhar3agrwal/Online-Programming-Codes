#include<stdio.h>
#include<string.h>
main()
{
int t; 
char a[10000];
scanf("%d",&t);
while(t--)
{
          scanf("%s",&a);
          if(a[strlen(a)-1]%2==0)
          printf("Mandark\n");
          else
          printf("Dexter\n");
}
return 0;
}
