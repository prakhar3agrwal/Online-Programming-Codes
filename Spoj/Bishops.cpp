#include<stdio.h>
#include<string.h>
void reverse(char *x, int beg, int end)
{
   char a, b, c;
 
   if ( beg >= end )
      return;   
 
   c = *(x+beg);
   *(x+beg) = *(x+end);
   *(x+end) = c;
 
   reverse(x, ++beg, --end);
}
int main()
{
char a[1000];
int i,j,k,x,r,l;
while(scanf("%s",&a)!=EOF)
{
                          if(strcmp(a,"1")==0)
                          printf("1\n");
                          else{
                          l=strlen(a);
                          reverse(a,0,l-1);
                          i=0;r=0;
                          while(a[i]!='\0')
                          {
                                           x=(a[i]-48)*2+r;
                                           a[i]=(x%10)+48;
                                           r=x/10;
                                           i++;
                          }
                          if(r!=0)
                          {
                                  a[i]=r+48;
                                  i++;
                          }
                          a[i]='\0';
                          i=0;
                          l=strlen(a);
                          //while(a[i]!='\0')
                          {
                                           if(a[i]-48>=2)
                                           {
                                                         a[i]=((a[i]-48)-2)+48;
                                                         //break;
                                           }
                                           else
                                           {
                                               x=a[i]-48;
                                               if(x==0)
                                               a[i]=56;
                                               else if(x==1)
                                               a[i]=57;
                                               i++;
                                               while(a[i]!='\0')
                                               {
                                                                if(a[i]-48==0)
                                                                {
                                                                              a[i]=57;
                                                                              i++;
                                                                }
                                                                else
                                                                {
                                                                    a[i]=((a[i]-48)-1)+48;
                                                                    if(a[i]-48==0 && i==l-1)
                                                                    a[i]='\0';
                                                                    break;
                                                                }
                                               }
                                           }
                          }
                          l=strlen(a);
                          reverse(a,0,l-1);
                          printf("%s\n",a);}
}
return 0;
}
