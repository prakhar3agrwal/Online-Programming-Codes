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
unsigned long long int i,j,k,n,m,s,t;
string x,y;
unsigned long long int required[100005], have[100005],ans = 0;
bool isPossible(unsigned long long int target){
	unsigned long long int temp = 0;
	for(i=0;i<n;i++){
		if(target*required[i] > have[i])
		temp += (target*required[i] - have[i]);
	}//cout<<"target "<<target <<" "<<temp<<"\n";
	if(temp>k)
	return false;
	return true;
}
int main()
{
cin>>n>>k;
for(i=0;i<n;i++){
	cin>>required[i];
}

for(i=0;i<n;i++){
	cin>>have[i];
	ans = max(ans, (have[i] + k)/required[si]);
}

unsigned long long int low, mid, high,temp=0;
low = 0, high = ans;
while(low <= high){
	mid = (low + (high-low)/2);
	if(isPossible(mid)){
		temp = mid;
		low = mid+1;
	}
	else
	high = mid-1;
}
cout<<temp;
}

