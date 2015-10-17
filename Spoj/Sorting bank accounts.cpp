#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
int n,k,t,i,x;
char h[123];
scanf("%d",&t);
while(t--){
scanf("%d",&n);
k=n;
vector<string>a;
while(n--)
{
          gets(h);
          if(h[0]!='\0')
          a.push_back(h);
          else
          n++;
}char ch[]="zzzzzzzzzz";
a.push_back(ch);
sort(a.begin(),a.end());x=1;
for(i=0;i<k;i++)
{
                if(a[i]!=a[i+1])
                {
                
                                          cout<<a[i]<<" "<<x<<"\n";
                                          x=1;
                }
                else x++;
}
}
}        
