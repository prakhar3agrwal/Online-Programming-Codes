#include<stdio.h>
main()
{
int i,j;
char a[2000];
while(scanf("%s",&a)!=EOF)
{
                          i=0;j=0;
                          while(a[i]!='\0')
                          {
                                           if(i%2==0)
                                           {
                                                     if(a[i]>122 || a[i]<97)
                                                     j++;
                                           }
                                           else
                                           {
                                               if(a[i]<65 || a[i]>90)
                                               j++;
                                           }
                                           i++;
                          }
                          i=j>(i-j)?(i-j):j;
                          printf("%d\n",i);
}
return 0;
}
