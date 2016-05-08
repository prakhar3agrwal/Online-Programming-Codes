#include<algorithm>
#include<iostream>
#include<string.h>
#include<ctype.h>
#include<math.h>
#include<cstdio>
#include<vector>
#include<queue>
#include<stack>
#include<map>
using namespace std;
int i,j,n,m,s,t;
long long int k, ans, maxElement;
string x,y;
int main()
{
cin>>t;
while(t--){
	cin>>n>>k;
	vector<pair<long long int, long long int> > a(n);
	maxElement = ans = 0;
	int index = -1;
	for(i=0;i<n;i++)
		cin>>a[i].first;
	for(i=0;i<n;i++){
		cin>>a[i].second;
		if(abs(a[i].second) >= abs(maxElement)){
			maxElement = abs(a[i].second);
			index = i;
		}
		ans += (a[i].first * a[i].second);
	}
	ans += maxElement * k;
	cout<<ans<<"\n";
}
}

