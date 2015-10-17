#include<iostream>
using namespace std;
int main()
{
char a[2];
int i=0;
while(1)
{
        gets(a);
        if(i==0)
        cout<<"Ready\n";
        if((a[0]>=65 && a[0]<=90 || a[1]>=65 && a[1]<=90) ||( a[0]>=97 && a[0]<=122 ||a[1]>=97 && a[1]<=122))
        {
        if((a[0]=='b'&& a[1]=='d')||(a[0]=='d'&& a[1]=='b')||(a[0]=='p'&& a[1]=='q')||(a[0]=='q'&& a[1]=='p'))
        cout<<"Mirrored pair\n";
        else
        cout<<"Ordinary pair\n";
        }
        else
        break;
        i++;
}
return 0;
}


