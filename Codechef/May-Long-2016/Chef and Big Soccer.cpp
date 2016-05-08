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
int i,j,k,n,m,s,t,ans,dp[1003][1003],A[1003];
string x,y;
int main()
{
cin>>t;
while(t--){
	cin>>n>>m>>s;
	for(i=1;i<=m;i++)
	cin>>A[i];
	dp[0][s] = 1;
	for(i=1;i<=m;i++){
		for(j=1;j<=n;j++){
			if(j>=A[i])
			dp[i][j] = dp[i-1][j-A[i]];
			if(j+A[i]<=n)
			dp[i][j] = (dp[i][j] + dp[i-1][j+A[i]])%1000000007;
		}
	}
	for(i=1;i<=n;i++)
	cout<<dp[m][i]<<" ";
	cout<<"\n";
	memset(dp,0,sizeof(dp));
}
}

