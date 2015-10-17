#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
int n,t,i,x,f,j;
char b[11];
cin>>n;
while(n--)
{
        cin>>t;
        vector<string> a;
        for(i=0;i<t;i++)
        {
                        cin>>b;
                        a.push_back(b);
        }
        sort(a.begin(),a.end());
        for(i=0;i<t-1;i++)
        {
                        x=0;f=0;
                        if(a[i][0]==a[i+1][0])
                        {
                                              x++;
                                              j=1;
                                              while(a[i][j]==a[i+1][j])
                                              {
                                                                       x++;j++;
                                              }
                                              if(a[i][x]=='\0'|| a[i+1][x]=='\0')
                                              {
                                                                 f=1;
                                                                 break;
                                              }
                        }
                        if(f==1)
                        break;
        }
        if(f==1)
        cout<<"NO\n";
        else
        cout<<"YES\n";
}
}
