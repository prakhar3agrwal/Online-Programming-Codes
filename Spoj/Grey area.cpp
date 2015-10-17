#include<iostream>
using namespace std;
int main()
{
int n,w,i,x,j,k,z,m,mv,y,mv1,w1,g,g1;
float s;
while(1)
{
        scanf("%d%d",&n,&w);
        if(n==0 && w==0)
        break;
        int a[100]={0};
        i=0;m=0;s=0.01;mv=0;g=g1=0;
        while(i<n)
        {
          scanf("%d",&x);
          if(x>mv)
          mv=x;
          z=x/w;
          a[z]++;
          if(a[z]>m)
          m=a[z];
          i++;
        }
        mv1=mv/w;
        w1=mv1;
        float(g1)=1.000000;
        for(i=0;i<mv/w;i++)
        {
                   s+=float(mv1*a[i])/float(m*w1);
                   mv1--;
        }   
        printf("%0.6f\n",s);
}
}     

