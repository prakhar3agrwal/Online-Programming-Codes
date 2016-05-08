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
int i,j,k,n,m,s,t;
string x,y,ans;
int main()
{
cin>>t;
while(t--){
	cin>>x>>y;
	n = x.length();
	int dp[26] = {0};
	for(i=0;i<n;i++)
	dp[x[i]-97]++;
	n = y.length();
	ans = "No\n";
	for(i=0;i<n;i++)
	if(dp[y[i]-97]>0){
		ans = "Yes\n";
		break;
	}
	cout<<ans;
}
}

