#include<string.h>
main()
{
int i,j,k,n,t,x,r,m,l,f,b[]={0,1,2,5,9,8,6};
char a[250];
scanf("%d",&t);
while(t--)
{
          scanf("%s",&a);
          l=strlen(a);
          while(1)
          {
                 i=0;
                 r=0;
                 m=0;
                 f=0;
                 while(a[i]!='\0')
                 {
                                  x=m*10+(a[i]-48);
                                  a[i]=x/7+48;
                                  m=x%7;
                                  i++;
                 }
                 printf("%d",b[m]);
                 for(i=l-1;i>=0;i--)
                 if(a[i]!='0')
                 {
                              f=1;
                              break;
                 }
                 if(f==0)
                 break;
          }
          printf("\n");
}
return 0;
}                              
