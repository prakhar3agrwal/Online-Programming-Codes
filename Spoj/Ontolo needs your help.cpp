#include <iostream>
int main () 
{
  int t;  
 long long int a,s=0;
    scanf("%d",&t);
    while ( t-- > 0){
          scanf("%lld",&a);
          s = s ^ a;
          }
    printf("%lld\n",s);
}
