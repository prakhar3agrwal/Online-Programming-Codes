#include<stdio.h>
#include<math.h>
main()
{
int i,k,t,n,s;
char a[40];
scanf("%d",&t);
while(t--)
{
         scanf("%s",&a);
         i=0;k=1;s=1;
         while(a[i]!='\0')
         {
                          if(a[i]==a[i+1])
                          s++;
                          else
                          {
                              if(s>1)
                              k*=pow(2,(s-1));
                              s=1;
                          }
                          i++;
         }
         printf("%d\n",k);
}
return 0;
}
