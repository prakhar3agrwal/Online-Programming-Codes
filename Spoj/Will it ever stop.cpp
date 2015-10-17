#include<iostream>
#include<cmath>
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
double y;
unsigned long long int n;
scanf("%llu",&n);
y=mylog2(n);
if(pow(2,y)==n)
cout<<"TAK\n";

else
cout<<"NIE\n";
return 0;
}
