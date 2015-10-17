#include<iostream>
using namespace std;
int main()
{
float s;
int i;
while(1)
{
        cin>>s;
        
        i=1;
        while(s>0)
        {
                  s-=1/float((i+1));
                  i++;
        }
        i--;
        if(i==0)
        break;
        cout<<i<<" card(s)\n";
}
}       

