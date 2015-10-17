#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int a[26]={0},d[26]={0},i,l,x,j;
char b[1001],c[1001];
while(scanf("%s%s",&b,&c)!=EOF)
{
                               l=strlen(b);
                               i=0;
                               while(i<l)
                               {
                                         a[b[i]-97]++;
                                         i++;
                               }
                               l=strlen(c);
                               i=0;
                               while(i<l)
                               {
                                         d[c[i]-97]++;
                                         i++;
                               }
                               i=0;
                               while(i<26)
                               {
                                          if(a[i]!=0 && d[i]!=0)
                                          {
                                                     
                                                     x=a[i]>d[i]?d[i]:a[i];
                                                     for(j=0;j<x;j++)
                                                     cout<<char(i+97);
                                          }
                                          i++;
                               }
                               cout<<"\n";
                               for(i=0;i<26;i++)
                               a[i]=d[i]=0;
}
}
