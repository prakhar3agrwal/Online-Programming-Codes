#include <iostream>
#include <cstdlib>
using namespace std;

int gcd (int a, int b){
    if ( b==0) return a;
    else
    return gcd ( b , a%b );
                      }
int main ()
{
    int t,a,b,g,x;
    cin>>t;
    while ( t-- > 0){
    cin>>a>>b;
    if ( a == (-b)) cout<<"2"<<endl;
    else{
    g=gcd (a,b);
    x= (a/g) - (b/g);
    if( x < 0) x*= (-1);
    cout<<x<<endl;
        }
    
                     }
    system ("pause");
    return 0;

}

