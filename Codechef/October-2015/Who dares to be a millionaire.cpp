/*
author-Prakhar Agrawal
handle-prakhar3agrwal
*/

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
int i,j,k,n,m,s,t,ans,correct;
string x,y;
int a[1005];
int main()
{
cin>>t;
while(t--){
	cin>>n;
	cin>>x>>y;
	for(i=0;i<=n;i++)
	cin>>a[i];
	correct = 0;
	for(i=0;i<n;i++)
	if(x[i] == y[i])
	correct++;
	if(correct == n)
	cout<<a[n]<<"\n";
	else{
		ans = a[0];
		for(i=1;i<=correct;i++)
		ans = max(ans,a[i]);
		cout<<ans<<"\n";
	}
}
}
