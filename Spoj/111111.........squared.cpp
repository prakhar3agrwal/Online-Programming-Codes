#include<iostream>
using namespace std;
int main()
{
unsigned long long int t,s,i,n,r,q,a[9]={0,2,3,4,5,6,7,8,9},b[9]={0,1,2,3,4,5,6,7,9},a1=44,b1=37;
while(scanf("%llu",&n)!=EOF)
{
         
         s=0;
         if(n<10)
         {
                 s=(n*(2+(n-1)))/2;
                 n--;
                 s+=(n*(2+(n-1)))/2;
         }
         else
         {
             s+=45;
             r=(n-9)%9;
             q=(n-9)/9;
             for(i=0;i<r;i++)
             s+=a[i];
             s+=q*44;
             s+=37;
             n-=9;
             r=n%9;
             q=n/9;
             if(r==0)
             {
                     s+=36;
                     s+=(q-1)*37;
             }
             else
             {
                 r--;
                 s+=(r*(2+(r-1)))/2;
                 s+=q*37;
             }
             
         }
         printf("%llu\n",s);
}
}
