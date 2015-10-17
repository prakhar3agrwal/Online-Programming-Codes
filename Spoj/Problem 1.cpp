#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
long long int n,num,sum;
int i,r;
cin>>n;
long long int a1,a2;
for(i=0;i<n;i++)
{
                cin>>a1>>a2;
                r=0;num=0;sum=0;
                while(a1>0)
                {
                                r=a1%10;
                                a1/=10;
                                num=num*10+r;
                } 
                sum+=num;
                r=0;num=0;
                while(a2>0)
                {
                                r=a2%10;
                                a2/=10;
                                num=num*10+r;
                } 
                sum+=num;
                r=0;num=0;
                while(sum>0)
                {
                                r=sum%10;
                                sum/=10;
                                num=num*10+r;
                } 
                cout<<num<<"\n";
}
//getch();
return 0;
}
