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
int i,j,k,n,m,s,t,ans,l,count;
string x,y;
int _find(int i){
	do{
		i++;
	}while(i<x.length() && x[i] == '1');
	return i;
}

int main()
{
cin>>n>>k;
cin>>x;
ans = INT_MAX;
l = x.length();
int left = _find(-1);
int right, mid ;
right = mid = left;
for(i=0; i<k; i++)
right = _find(right);

while(right<l){
	while(max(mid - left, right - mid) > max(_find(mid) - left, right - _find(mid))){
		mid = _find(mid);
	}
	ans = min(ans, max(mid - left, right - mid));
	left = _find(left);
	right = _find(right);
	
}
cout<<ans<<endl;
}

