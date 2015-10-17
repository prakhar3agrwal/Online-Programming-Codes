#include<iostream>
using namespace std;
int main()
{
int n,ng,nm,i,j,*a,*b,t,h1,h2;
cin>>n;
while(n--)
{
            cout<<"\n";
            cin>>ng>>nm;
            a=new int[ng];
            b=new int[nm]; h1=h2=0;
            for(i=0;i<ng;i++)
            {
                             cin>>a[i];
                             if(h1<a[i])
                              h1=a[i];
            }
            for(i=0;i<nm;i++)
            {
                             cin>>b[i];  
                             if(h2<b[i])
                             h2=b[i];
            }              
           if(h1>=h2)
            cout<<"Godzilla\n";
           else if(h1<h2)
             cout<<"MechaGodzilla\n";                
            delete a;
            delete b;
          
}
return 0;
}            
                    
