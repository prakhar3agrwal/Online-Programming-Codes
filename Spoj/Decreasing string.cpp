#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
int n,i,j,k,q,r;
cin>>n;int a;

char b[101]="abcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuvwxyzabcdefghijklmnopqrstuv";
for(i=0;i<n;i++)
{  
                cin>>a;
                q=a/25;
                r=a%25;
                if(r!=0)
                for(j=r;j>=0;j--)
                cout<<b[j];
                if(q<=4)
                for(k=0;k<q;k++)
                for(j=25;j>=0;j--)
                {
                                   cout<<b[j];
                }
                cout<<"\n";
}
//getch();
return 0;
}
