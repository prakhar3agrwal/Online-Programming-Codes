#include<iostream>
using namespace std;
int main()
{
int n,r,in;
long long int a[50],b[100][50],s,x,i,j;
while(1)
{
        cin>>n>>r;
        if(n==0 && r==0)
        break;
        s=0;in=0;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<r;i++)
        for(j=0;j<n;j++)
        {
                        cin>>b[i][j];
                        if(b[i][j]!=0)
                        b[i][j]=(a[j]*10)/b[i][j];
                        else
                        b[i][j]=1000001;
        }
        
        for(i=0;i<r;i++)
        {
                        x=b[i][0];
                        for(j=1;j<n;j++)
                        {
                                        if(x>b[i][j])
                                        x=b[i][j];
                        }
                        if(x>s)
                        {
                               s=x;
                               in=i+1;
                        }
        }
        if(s!=0)
        cout<<in<<" "<<s<<"\n";
        else
        cout<<"1 0\n";
}
}                       
        
