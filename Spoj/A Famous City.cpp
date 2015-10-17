#include<stdio.h>
#include<string.h>
main()
{
int i,j,n,s,x=0;
int a[100003];
int b[100002]={0};
while(scanf("%d",&n)!=EOF)
{
                          
                          x++;
                          for(i=0;i<n;i++)
                          scanf("%d",&a[i]);
                          s=0;
                          for(i=0;i<n;i++)
                          {
                                          if(b[i]==0 && a[i]!=0)
                                          {
                                                     b[i]=1;
                                                     j=i+1;s++;
                                                     while(j<n && a[j]>=a[i])
                                                     {
                                                               if(a[j]==a[i])
                                                               b[j]=1;
                                                               j++;
                                                     }
                                                     
                                          }
                          }
                          printf("Case %d: %d\n",x,s);
                          memset(b,0,sizeof(b));
                          
}
return 0;
}         
