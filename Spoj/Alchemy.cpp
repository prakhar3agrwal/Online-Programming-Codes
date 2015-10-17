#include<iostream>
using namespace std;
int main()
{
long long int i,w,j=0;
while(1)
{
          cin>>i>>w;
          if(i==-1 && w==-1)
          break;
          else if(i%1000==0 && w%37==0 && i/w==27)
          {
               cout<<"Y\n";
          }
          else
          cout<<"N\n";
}
return 0;
}             
