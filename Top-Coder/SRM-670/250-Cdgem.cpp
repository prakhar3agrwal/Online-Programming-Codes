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


class Cdgame {
public:
	int rescount(vector <int> a, vector <int> b) {
		int i,j,k,n,s1=0,s2=0;
		n=a.size();
		map<int,int>p3a;
		for(i=0;i<n;i++){
			s1+=a[i];
			s2+=b[i];
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				k = (s1-a[i]+b[j]) * (s2-b[j]+a[i]);
				p3a[k]++;
			}
		}
		return p3a.size();
	}
};
