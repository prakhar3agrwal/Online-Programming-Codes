#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[100002],b[100002];
long int i,j,l,x,l1,l2;
while(1)
{
        cin>>a>>b;
        if(a[0]=='*' && b[0]=='*')
        break;
        l1=strlen(a);
        l2=strlen(b);
        i=0;j=0;
        while(i<l1 || j<l2)
        {
                   if(a[i]=='0' && i<l1)
                   {i++;}
                   if(b[j]=='0' && j<l2)
                   j++;
                   else if(a[i]!='0' && b[j]!='0')
                   break;
        }x=0;
        if(i==l1 && j==l2)
                x=0;
        else if((l1-i)==(l2-j)) 
        x=0;
        else if(i==l1)
        x=2;
        else if(j==l2)
        x=1;
        while(i<l1 && j<l2)
        {
                if(a[i]>b[j])
                {
                             x=1;break;}
                else if(a[i]<b[j])
                {
                    x=2;break;
                }
                i++;j++;
        }
        if((l1-i)>(l2-j))
        cout<<">\n";
        else if((l2-j)>(l1-i))
        cout<<"<\n";
        else if(x==1 && (l1-i)>=(l2-j))
        cout<<">\n";
        else if(x==2 && (l2-j)>=(l1-i))
        cout<<"<\n";
        else if(x==0)
        cout<<"=\n";
}
}
