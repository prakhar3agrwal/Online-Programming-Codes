class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0, late = 0, len ,i;
        len = s.length();
        for(i=0;i<len;i++){
            if(s[i] == 'A'){
                absent ++;
                late = 0;
            }
            else if(s[i] == 'L'){
                late++;
            }else{
                late = 0;
            }
            if(late > 2 || absent > 1)
            return false;
        }
        return true;
    }
};