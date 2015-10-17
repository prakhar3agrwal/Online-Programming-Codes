#include<iostream>
using namespace std;
int main()
{
unsigned int n,s,sum;
int f,*a,i,j,nf,t,k,flag;
cin>>n;
for(i=0;i<n;i++)
{
                cin>>s>>f;
                a=new int[f];
                for(j=0;j<f;j++)
                cin>>a[j];
                for(j=0;j<f-1;j++)
                {
                                  for(k=0;k<f-j-1;k++)
                                  {
                                                      if(a[k]<a[k+1])
                                                      {
                                                                     t=a[k];
                                                                     a[k]=a[k+1];
                                                                     a[k+1]=t;
                                                      }
                                  }
                }sum=a[0];nf=1;flag=1;
                for(j=1;j<f;j++)
                {
                                if(sum<s)
                                {
                                         sum+=a[j];
                                         nf++;
                                         flag=0;
                                }
                                else if(sum>=s)
                                {
                                     flag=1;
                                     
                                }
                                else 
                                {
                                     flag=0;
                                     break;
                                }
                }
                cout<<"Scenario #"<<i+1<<":\n";
                if(flag==0)
                cout<<"impossible\n";
                else
                cout<<nf<<"\n";
}
return 0;
}

                
