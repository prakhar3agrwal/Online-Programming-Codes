#include<stdio.h>
#include<string.h>
main()
{
int i=10,n;
char a[10],b[10],c[10];
scanf("%s%d",&a,&n);
if(n==10)
return 0;
          while(n--)
          {
                    scanf("%s%s",&b,&c);
                    if(strcmp(a,b)==0)
                    strcpy(a,c);
                    else if(strcmp(a,c)==0)
                    strcpy(a,b);
          }
          printf("%s\n",a);
}
                    
                    
