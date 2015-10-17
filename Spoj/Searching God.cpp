#include<stdio.h>
#include<string.h>
main()
{
int i,j,k,l,t;
char a[10005],b[10005],r[10];
while(scanf("%d",&l)!=EOF)
{
                          scanf("%s",&a);
                          scanf("%s",&r);
                          scanf("%d",&t);
                          while(t--)
                          {
                                          for(j=0;j<l;j++)
                                          {
                                                          if(j==0)
                                                          {
                                                                  k=((a[l-1]-48)*4)+((a[0]-48)*2)+(a[(j+1)%l]-48);
                                                                  b[j]=r[k];
                                                          }
                                                          else if(j==l-1)
                                                          {
                                                               k=((a[j-1]-48)*4)+((a[j]-48)*2)+(a[0]-48);
                                                               b[j]=r[k];
                                                          }
                                                          else
                                                          {
                                                              k=((a[j-1]-48)*4)+((a[j]-48)*2)+(a[j+1]-48);
                                                              b[j]=r[k];
                                                          }
                                          }b[j]='\0';
                                          strcpy(a,b);
                          }
                          printf("%s\n",a);
}
return 0;
}
                          
