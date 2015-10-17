#include<iostream>
using namespace std;
int main()
{
int a[20000],n,i,j,temp,m,num,nt,k,x;
cin>>n;
for(i=0;i<n;i++)
{
                cin>>num;
                for(j=0;j<200;j++)
                a[j]=1;
                nt=1;
                for(j=2;j<=num;j++)
                {
                                   temp=0;
                                   for(k=0;k<nt;k++)
                                   {
                                                    x=a[k]*j+temp;
                                                    a[k]=x%10;
                                                    temp=x/10;
                                   }
                                   while(temp>0)
                                   {
                                                a[nt++]=temp%10;
                                                temp/=10;
                                   }
                                  
                                   
                                   
                }
                for(j=nt-1;j>=0;j--)
                cout<<a[j];
                cout<<"\n";
}
return 0;
}            
                              
