class Solution {
public:
    string getHint(string secret, string guess) {
        int a[10] = {0},b[10] = {0};
        int matched = 0,cows=0;
        string ans = "";
        for(int i=0;i<secret.length();i++){
            if(secret[i] == guess[i])
            matched++;
            a[secret[i] - 48]++;
            b[guess[i] - 48]++;
        }
        for(int i=0;i<10;i++)
        cows+=min(a[i],b[i]);
        ans = to_string(matched) + "A" + to_string(cows-matched) + "B";
        return ans;
    }
};
