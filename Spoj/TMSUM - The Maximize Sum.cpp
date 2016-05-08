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
int i,j,k,n,m,s,t,zero,one,neg;
long long int ans;
int main()
{
cin>>t;
while(t--){
	cin>>n;
	zero = one = neg = 0;
	ans = 0;
	vector<int> a;
	for(i = 0; i < n; i++){
		cin>>j;
		a.push_back(j);
		if(j == 0)
		zero = 1;
		else if(j == 1)
		one = 1;
		else if(j<0)
		neg++;
	}
	sort(a.begin(),a.end());
	for(i = 0; i+1< neg; i+=2)
	ans += (long long int)a[i] * (long long int)a[i+1];
	if(i<neg){
		if(zero == 0)
		ans += (long long int)a[i];
		else i++;
		i++;
	}
	else if(zero == 1)
	i++;
	if(one == 1){
		ans += (long long int)1;
		i++;
	}
	if((n - i)%2){
		ans += (long long int)a[i];
		i++;
	}
	for(j=i; j<n ;j+=2)
	ans += (long long int)a[j] * (long long int)a[j+1];
	cout<<ans<<"\n";
}
}

