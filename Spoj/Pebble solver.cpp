#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[100000];
int i,j,s,l,k=0;
while(scanf("%s",&a)!=EOF)
{
                          k++;
                          s=0;
                          l=strlen(a);
                          i=0;
                          while(i<l)
                          {
                                          if(a[i]=='1')
                                          {
                                                       a[i]='0';
                                                       s++;
                                                       j=i+1;
                                                       while(j<l)
                                                       {if(a[j]=='0')
                                                       a[j]='1';
                                                       else
                                                       a[j]='0';
                                                       j++;}
                                          }
                                          i++;
                          }
                          cout<<"Game #"<<k<<": "<<s<<"\n";
}
}
