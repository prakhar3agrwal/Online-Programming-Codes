#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int t,r,c,i,j,k,s,x=0,r1,c1,in,l,x1,g=0;
char a[10000],b[25][25],d[10000];
scanf("%d",&t);
while(t--)
{
          g++;
       scanf("%d%d%s",&r,&c,&a);
       x=(r*c)/5;j=0;k=1;
       for(i=0;i<strlen(a);i++)
       b[i/c][i%c]=a[i];x1=0;
       r1=c1=0;j=0;i=in=0;k=1;l=0;x1=0;
       while(x1<r*c)
       {
                        if(in<strlen(a))
                      { for(i=0;i<(c-j);i++)
                       {
                                            d[l]=b[in/c][in%c];
                                            in++;
                                            l++;x1++;
                       }j++;in--;
                       in+=c;}
                        if(in<strlen(a))
                      { for(i=0;i<(r-k);i++)
                       {
                               d[l]=b[in/c][in%c];   
                               in+=c;
                               l++;x1++;
                       }    
                       k++;in-=c;in--;}
                        if(in<strlen(a))
                        {
                       for(i=0;i<(c-j);i++)
                       {
                                    d[l]=b[in/c][in%c];
                                    in--;
                                    l++;x1++;
                       }
                       in++;
                       in-=c;j++;}
                       if(in<strlen(a))
                       {for(i=0;i<(r-k);i++)
                       {
                                            
                                    d[l]=b[in/c][in%c];
                                    in-=c;
                                    l++;x1++;
                       } k++;
                       in+=c;in++;} 
       }       
                       
 d[l]='\0';  j=0;printf("%d ",g);
 for(i=0;i<x;i++)
 {
          s=0;
          s+=((d[j]-48)*16)+((d[j+1]-48)*8)+((d[j+2]-48)*4)+((d[j+3]-48)*2)+(d[j+4]-48);
          if(s==0)
          cout<<" ";
          else
          {
              cout<<char(s+64);
          }
          j+=5;
 } printf("\n");                                  
}
}
