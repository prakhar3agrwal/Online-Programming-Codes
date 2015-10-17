#include<iostream>
using namespace std;
int main()
{
int a,b,i,j,x,y,t,u;
while(1)
{
        cin>>a>>b;
        if(a==-1 && b==-1)
        break;
        else{
             x=a>b?a:b;
             y=a<b?a:b;t=u=1;
             for(i=x+1,j=0;i<=x+y;i++)
             {
                                      t=t*i;
                                    //a[j]=i;
                                    j++;
             }
             for(i=2,j=0;i<=y;i++)
            {
                                  u=u*i;
                                  // b[j]=i;
                                   j++;
            }
           if(t/u==a+b)
           cout<<a<<"+"<<b<<"="<<a+b<<"\n";
           else
           cout<<a<<"+"<<b<<"!="<<a+b<<"\n";
            
             
}            
       
}
return 0;
}
