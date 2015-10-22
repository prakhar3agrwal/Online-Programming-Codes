/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
  bool fn(Interval x, Interval y){
     return (x.start <= y.start);
 }
 
vector<Interval> Solution::insert(vector<Interval> &a, Interval y) {
    
    int i,j,k,n;
    
    a.push_back(y);
    sort(a.begin(),a.end(),fn);
    n=a.size();
    stack<Interval> s;
    s.push(a[0]);
    Interval temp;
    for(i=1;i<a.size();i++){
        temp = s.top();
        if(a[i].start<=temp.end){
            s.pop();
            temp.end = max(a[i].end,temp.end);
            s.push(temp);
        }
        else
        s.push(a[i]);
    }
    
    vector<Interval> ans;
    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }
    
    sort(ans.begin(),ans.end(),fn);
    
    return ans;

}

