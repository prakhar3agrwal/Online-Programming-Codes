#include <vector>
#include <list>
#include <map>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;


class BearSlowlySorts {
public:
	int minMoves(vector <int> a) {
	int i,j,k,n,ans=0,small,large;
	n = a.size();
	for(i=1;i<n;i++){
		if(a[i]<a[i-1])
		break;
	}
	if(i==n)
	return 0;
	small = *min_element(a.begin(),a.end());
	large = *max_element(a.begin(),a.end());
	if(a[0] == small || a[n-1] == large)	
		return 1;
	if(a[0] == large && a[n-1] == small)
		return 3;
	else return 2;
	}
};


