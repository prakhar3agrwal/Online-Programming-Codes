#include<iostream>
using namespace std;
int main()
{
unsigned long long  s;
int n,i,j,*a,*b,num,k,t;
cin>>n;
for(i=0;i<n;i++)
{
                s=0;
                cin>>num;
                a=new int[num];
                b=new int[num];
                for(j=0;j<num;j++)
                cin>>a[j];
                for(j=0;j<num;j++)
                cin>>b[j];
                for(j=0;j<num-1;j++)
                {
                                  for(k=0;k<num-j-1;k++)
                                  {
                                                        if(a[k]<a[k+1])
                                                        {
                                                                       t=a[k];
                                                                       a[k]=a[k+1];
                                                                       a[k+1]=t;
                                                        }
                                                         if(b[k]<b[k+1])
                                                        {
                                                                       t=b[k];
                                                                       b[k]=b[k+1];
                                                                       b[k+1]=t;
                                                        }
                                  }
                }
                for(j=0;j<num;j++)
                s+=a[j]*b[j];
                cout<<s<<"\n";
                delete a;
                delete b;
}
return 0;
}
