#include<iostream>
using namespace std;
int main()
{
int n,d[8],j,i;
char a[40],c[3];
cin>>n;
while(n--)
{
          cin>>j;
          cin>>a;
          i=0;
          while(i<8)
          {
                    d[i]=0;
                    i++;
          }
          i=0;
          while(i<38)
          {
                     c[0]=a[i];
                     c[1]=a[i+1];
                     c[2]=a[i+2];
                     if(c[0]=='T' && c[1]=='T' && c[2]=='T')
                     d[0]++;
                     else if(c[0]=='T' && c[1]=='T' && c[2]=='H')
                     d[1]++;
                     else if(c[0]=='T' && c[1]=='H' && c[2]=='T')
                     d[2]++;
                     else if(c[0]=='T' && c[1]=='H' && c[2]=='H')
                     d[3]++;
                     else if(c[0]=='H' && c[1]=='T' && c[2]=='T')
                     d[4]++;
                     else if(c[0]=='H' && c[1]=='T' && c[2]=='H')
                     d[5]++;
                     else if(c[0]=='H' && c[1]=='H' && c[2]=='T')
                     d[6]++;
                     else if(c[0]=='H' && c[1]=='H' && c[2]=='H')
                     d[7]++;
                     i++;           
          }
          cout<<j;
          i=0;
          while(i<8)
          {
                    cout<<" "<<d[i];
                    i++;
          }
          cout<<endl;
}
return 0;
}          
                     
