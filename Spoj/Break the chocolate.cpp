#include <iostream>
#include <math.h>
#define ll long long int
using namespace std;
int fun ( int x ){
	int p=0;
	while(x!=1) {x>>=1;p++;}
	return p;
	}
inline int prakhar( char c[] ){
	int i=0,ans=0;
	while(c[i]!='\0') { ans=ans*10 + (c[i]-48); i++; }
	return ans;
	}
int main () {
	char q[10], w[10], e[10];
    int t, a, b, c, c_c=1, xa, xb, xc;
	ll n;
	scanf("%d",&t);
	while(t--){
	scanf("%s%s%s",&q,&w,&e);
	a = prakhar(q);b = prakhar(w); c = prakhar(e);
	n =((ll)a*(ll)b*(ll)c)-1;
	xa = fun(a); xb = fun(b); xc = fun(c);
	cout<<xa<<xb<<xc;
	if(pow(2,xa) != a ) xa++;
    if(pow(2,xb) != b ) xb++;
    if(pow(2,xc) != c ) xc++;
	printf("Case #%d: %lld %d\n",c_c,n,xa+xb+xc);
	c_c++;
		}
	}
