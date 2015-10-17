#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
unsigned long long int w,h,t,x,n,y,max,max1,max2,i,j;
scanf("%llu",&t);
while(t--)
{
          scanf("%llu%llu%llu",&w,&h,&n);
          vector < unsigned long long int > a;
          vector < unsigned long long int > b;
          if(n!=0){
          for(i=0;i<n;i++)
          {
                     scanf("%llu%llu",&x,&y);
                     a.push_back(x);
                     b.push_back(y); 
          }
          sort(a.begin(),a.end());
          sort(b.begin(),b.end());
          max1=max2=0;
          for(i=1;i<n;i++)
          {
                          if((a[i]-a[i-1]-1)>max1)
                          max1=a[i]-a[i-1]-1;
                          if((b[i]-b[i-1]-1)>max2)
                          max2=b[i]-b[i-1]-1;
          }
          if((a[0]-1)>max1)
          max1=a[0]-1;
          if((b[0]-1)>max2)
          max2=b[0]-1;
          if(w-a[n-1]>max1)
          max1=w-a[n-1];
          if(h-b[n-1]>max2)
          max2=h-b[n-1];
          max=max1*max2;
          }
          else if(n==0)
          max=w*h;
          printf("%llu\n",max);
}
}
                                   
