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


class BearPaints {
public:
	long long maxArea(int x, int y, long long n) {
		if(max(x,y) >= n)
		return n;
		long long int w,h,ans=0,i,j;
		w = (long long int)x, h = (long long int)y;
		for(i=w;i>=1;i--){
			long long int x1 = n/i;
			x1 = min(x1,h);
			ans = max(ans, x1*i);
		}
		return ans;
	}
};
