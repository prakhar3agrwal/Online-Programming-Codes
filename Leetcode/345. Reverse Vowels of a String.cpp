//check for both lower and upper case characters

class Solution {
public:
    int next (string s, int curr){
        curr ++;
        while(curr < s.length()){
            if(tolower(s[curr]) == 'a' || tolower(s[curr]) == 'e'  || tolower(s[curr]) == 'i' || tolower(s[curr]) == 'o' || tolower(s[curr]) == 'u' )
            return curr;
            curr ++;
        }
        return curr;
    }
    
    int pre (string s, int curr){
        curr --;
        while(curr >= 0){
            if(tolower(s[curr]) == 'a' || tolower(s[curr]) == 'e'  || tolower(s[curr]) == 'i' || tolower(s[curr]) == 'o' || tolower(s[curr]) == 'u' )
            return curr;
            curr --;
        }
        return curr;
    }
    string reverseVowels(string s) {
        int left, right, i ,len;
        len = s.length();
        left = next(s, -1);
        right = pre (s,len);
        while(left < right){
            swap(s[left], s[right]);
            left = next(s, left);
            right = pre(s,right);
        }
        return s;
    }
};
