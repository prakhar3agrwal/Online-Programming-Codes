#include<iostream>
using namespace std;
int main()
{
long long int n,num,*a;
int i,j,f;
while(1)
{
                f=0;
                cin>>num;
                if(num==0)
                break;
                a=new long long int[num+1];a[0]=0;
                for(j=1;j<=num;j++)
                cin>>a[j];
                for(j=1;j<=num;j++)
                {
                                  if(a[a[j]]!=j)
                                  {f=1;
                                  break;
                                  }
                }
                if(f==0)
                cout<<"ambiguous\n";
                else
                cout<<"not ambiguous\n";
                delete a;
}
return 0;
}
