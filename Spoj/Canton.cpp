#include<iostream>
using namespace std;
int main()
{
long long int n,num,r,c;
int i,j,f,ch=0;;
cin>>n;
while(n--)
{
          cin>>num;
          r=c=1;
          f=0;
          ch=0;
          for(j=2;j<=num;j++)
          {
               if((c-1==0 || r-1==0)&& ch==0)
               {
                         if(f==0)
                         {
                                 c++;
                                 f=1;
                                 ch=1;
                         }
                         else if(f==1)
                         {
                                  r++;
                                  f=0;
                                  ch=1;
                         }
               }
               else 
               {
                   if(f==1)
                   {
                           r++;
                           c--;
                           ch=0;
                   }
                   else if(f==0)
                   {
                           r--;
                           c++;
                           ch=0;
                   }
               }
          }  
          cout<<"TERM "<<num<<" IS "<<r<<"/"<<c<<"\n";
}          
return 0;
}
