#include<iostream>
#include<math.h>
int main()
{
long int n,i,a,y,z,x=50;
while(x--){scanf("%ld",&n);
a=0;
for(i=1;i<=sqrt(n);i++){y=n-i*i;
z=int(sqrt(y));
if(z*z==y && i>=z)a++;}
printf("%ld\n",a);
}
}
