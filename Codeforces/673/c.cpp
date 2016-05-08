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
int i,j,k,n,m,s,t,ans[5005],a[5005];
string x,y;
int main()
{
cin>>n;
for(i =0 ;i<n;i++)
a[i]=1;
for(i=0;i<n;i++){
	int dp[5005] = {0},max_index = 0;
	for(j=i;j<n;j++){ 
		dp[a[j]]++;
		k = dp[a[j]];
		if(k > dp[max_index]){
			max_index = a[j]; 
		} 
		else if(k == dp[max_index]){
			if(a[j] < max_index){
				max_index = a[j];
			}
		}
		ans[max_index]++;
	}
}
for(i =1;i<=n;i++)
cout<<ans[i]<<" ";
}

