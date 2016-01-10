class Solution {
public:
    int majorityElement(vector<int> &num) {
        int i, index, count;
        index = 0, count = 1;
        for(i=1;i<num.size();i++){
            if(num[i] == num[index])
            count++;
            else
            count--;
            if(count<0){
                count = 1;
                index = i;
            }
        }
        return num[index];
    }
};
