#include <iostream>   // std::cout
#include <string>  
using namespace std;
string _do(int a){
    string ans = "";
    int b=a;
    return (to_string(b));
}
bool fn(int a,int b){
    string x = _do(a) + _do(b);
    string y = _do(b) + _do(a);
    if(x>y)
    return true;
    return false;
}

string Solution::largestNumber(const vector<int> &a) {
    
        vector<int>x;int j=0;
    for(int i=0;i<a.size();i++)
    x.push_back(a[i]);
    sort(x.begin(),x.end(),fn);
    string ans = "";
    for(int i=0;i<x.size();i++){
        ans += _do(x[i]);
        if(x[i]==0)
        j++;
    }
    if(j==x.size())
    ans="0"
    return ans;
}

