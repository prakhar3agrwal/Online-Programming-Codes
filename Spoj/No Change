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
int i,j,k,n,m,s,t,ans,x;
int a[5], dp[100005][5];
int main()
{
cin>>x>>k;
for(i=0;i<k;i++)
cin>>a[i];
j=1;
for(i=a[0];i<=x;i+=a[0]){
	dp[i][0] = j;
	j++;
}
for(i=1;i<k;i++){
	for(j=a[0];j<=x;j++){
		if(j-a[i]>0 && dp[j-a[i]][0]>0){
			if(dp[j-a[i]][i]+1<= dp[j-a[i]][i-1]){
				for(m=0;m<i;m++)
				dp[j][m] = dp[j-a[i]][m];
				dp[j][m] = dp[j-a[i]][m] + 1;
			}
		}
	}
}
if(dp[x][0]>0)
cout<<"YES\n";
else
cout<<"NO\n";
}
