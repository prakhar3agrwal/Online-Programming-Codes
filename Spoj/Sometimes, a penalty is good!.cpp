#include<iostream>
#include<math.h>
using namespace std;
int mylog2(unsigned long long x)

{

    int l = -1; // mylog2(0) will return -1

    while (x != 0llu)

    {

        x = x >> 1llu;

        ++l;

    }

    return l;

}
int main()
{
unsigned long long int g,t,a,d,i,s,x,y,p;
double y1;
while(1)
{
        scanf("%llu%llu%llu%llu",&g,&t,&a,&d);
        if(g==-1)
        break;
        s=0;
        s+=(((t-1)*t)/2)*g;
        x=(a*g)+d;
        y1=mylog2(x);
        if(pow(2,y1)!=x)
        {
                        p=y1+1;
                        y1=pow(2,(y1+1));
                        y=y1;
                        
        }
        else 
        {
                            y=x;
                            p=y1;
        }
        x=y-x;y/=2;
        s+=2*y*(1-(pow(0.5,p)));
        printf("%llu*%llu/%llu+%llu=%llu+%llu\n",g,a,t,d,s,x);
}
}
