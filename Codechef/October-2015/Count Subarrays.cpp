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
long long int ans;
string x,y;
int a[100005];
int main()
{
cin>>t;
while(t--){
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	ans = 0;
	j=1;
	for(i=2;i<=n;i++){
		if(a[i]>=a[i-1])
		j++;
		else{
			ans += ((long long int)j*(j+1))/2;
			j=1;
		}
	}
	ans += ((long long int)j*(j+1))/2;
	cout<<ans<<endl;
}
}
