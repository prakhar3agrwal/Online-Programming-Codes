#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
int n,a,b,c,f,i;
char a1[50],b1[50],c1[50],p,eq;
scanf("%d",&n);
while(n--)
{
          a=b=c=f=i=0;
          cin>>a1>>p>>b1>>eq>>c1;
          while(a1[i]!='\0')
          {
                            if(a1[i]=='m')
                            {
                                          f=1;
                                          break;
                            }
                            i++;
          }
          if(f==0)
          {i=0;
          while(b1[i]!='\0')
          {
                            if(b1[i]=='m')
                            {
                                          f=2;
                                          break;
                            }
                            i++;
          }
          }
          if(f==0)
          {i=0;
          while(c1[i]!='\0')
          {
                            if(c1[i]=='m')
                            {
                                          f=3;
                                          break;
                            }
                            i++;
          }
          }
          if(f==1)
          {
                  b=atoi(b1);
                  c=atoi(c1);
                  a=c-b;
          }
          else if(f==2)
          {
               a=atoi(a1);
               c=atoi(c1);
               b=c-a;
          }
          else if(f==3)
          {
               a=atoi(a1);
               b=atoi(b1);
               c=a+b;
          }
          printf("%d + %d = %d\n",a,b,c);
}
}
