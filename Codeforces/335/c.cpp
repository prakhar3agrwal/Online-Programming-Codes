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
#include<set>
using namespace std;
int i,j,k,n,m,t,ans;
string x,y;
int a[100005];
int main()
{
cin>>n;
for(i=0;i<n;i++){
	cin>>j;
	a[j] = a[j-1] + 1;
	ans = max(ans, a[j]);
}
cout<<n-ans;
}

