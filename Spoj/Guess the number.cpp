#include<iostream>
#include<string.h>
using namespace std;
int main()
{
char a[21];
int i,l,f,j,b[20]={0},k,f1,x,s,fa;
long long int p;
while(1)
{
        cin>>a;
        f=0;
        if(a[0]=='*')
        break;
        else if(a[0]=='N')
        cout<<"-1\n";
        else
        {
            p=1;
            l=strlen(a);j=0;
            for(i=0;i<l;i++)
            {
                            if(a[i]=='Y')
                            {
                                         b[j]=i+1;j++;
                            }
            }x=2;
            while(1)
            {
                    f=0;f1=0;s=0;fa=0;
                    for(k=1;k<j;k++)        
                    {
                                            if(b[k]%x==0)
                                            {            b[k]/=x;
                                                         fa++;
                                            }
                    }
                    p*=x;
                    if(fa==0)
                    {
                             p/=x;
                             x++;
                    }     
                    
                    for(k=0;k<j;k++)
                    {
                                    if(b[k]!=1)
                                    {
                                               f=1;
                                               break;
                                    }
                                    else 
                                    continue;
                    }
                    if(f==0)
                    break;
                    f=0;
            }f=0;
            for(k=0;k<l;k++)
            {
                            if(p%(k+1)==0 && a[k]=='N')
                            {
                                          f=1;
                                          break;
                            }
            }
              if(f==1)
        cout<<"-1\n";
        else
        cout<<p<<"\n";
        }
            
}
}
