class Solution {
public:
    int threeSumClosest(vector<int> &x, int target) {
        int i,j,k,n,sum=1000000000;
        sort(x.begin(),x.end());
        n=x.size();
        for(i=0;i<n-2;i++)
        {
            j=i+1;
            k=n-1;
            while(j<k)
            {
                if(x[i]+x[j]+x[k]==target)
                return target;
                else if(x[i]+x[j]+x[k]>target)
                {
                    if((abs(sum-target)>abs(target-(x[i]+x[j]+x[k]))))
                    sum=x[i]+x[j]+x[k];
                    k--;
                }
                else if(x[i]+x[j]+x[k]<target)
                {
                    if((abs(sum-target)>abs(target-(x[i]+x[j]+x[k]))))
                    sum=x[i]+x[j]+x[k];
                    j++;
                }
            }
        }
        return sum;
    }
};