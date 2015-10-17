#include<iostream>
#include<string.h>
using namespace std;
int main()
{
int n,x,l=0,g1=0,g2=0,t1,g,t2;
char z[6];
scanf("%d",&n);
t1=t2=x=l=0;
while(n--)
{
     scanf("%d",&g);
     cin>>z;
     x=((z[0]-48)*10+(z[1]-48))*60+((z[3]-48)*10+(z[4]-48));
     if(g1>g2)
     {
              t1=t1+(x-l);
              l=x;
     }
     else if(g1<g2)
     {
            t2=t2+(x-l);
            l=x;   
     }
     else if(g1==g2)
     {
            l=x;
     }
     if(g==1)
     g1++;
     else
     g2++;
}
if(g1>g2)
t1+=48*60-l;
else if(g1<g2)
t2+=48*60-l;
if(t1/60<10 && t1%60<10)
cout<<"0"<<t1/60<<":0"<<t1%60<<"\n";
else if(t1/60<10 && t1%60>=10)
cout<<"0"<<t1/60<<":"<<t1%60<<"\n";
else if(t1/60>=10 && t1%60<10)
cout<<t1/60<<":0"<<t1%60<<"\n";
else 
cout<<t1/60<<":"<<t1%60<<"\n";
if(t2/60<10 && t2%60<10)
cout<<"0"<<t2/60<<":0"<<t2%60<<"\n";
else if(t2/60<10 && t2%60>=10)
cout<<"0"<<t2/60<<":"<<t2%60<<"\n";
else if(t2/60>=10 && t2%60<10)
cout<<t2/60<<":0"<<t2%60<<"\n";
else 
cout<<t2/60<<":"<<t2%60<<"\n";
}   

