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
char a[10];
unsigned long long int num,i,j,y,ans;
while(1)
{
        scanf("%s",&a);
        if(strcmp(a,"00e0")==0)
        break;
        num=(((a[0]-48)*10)+(a[1]-48))*(pow(10,(a[3]-48)));
        y=mylog2(num);
        if(pow(2,y)==num)
        ans=1;
        else
        {
            num-=pow(2,y);
            ans=3+(num-1)*2;
        }
        printf("%llu\n",ans);
}
}
        
        

