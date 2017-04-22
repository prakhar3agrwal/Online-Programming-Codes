class Solution {
public:
    
    char chars[4] = {'A','C','G','T'};
    string convertDNA(long long int val){
        string dna = "";
        while(val>0){
            dna = chars[val%10 - 1] + dna;
            val /=10;
        }
        return dna;
    }
    vector<string> findRepeatedDnaSequences(string s) {
        map<long long int,int> p3a;
        map<long long int,int> ::iterator it;
        long long int mod = 1000000000;
        int l,i;
        l = s.length();
        vector<string>ans;
        if(l<11)
        return ans;
        long long int hash = 0;
        for(i=0;i<10;i++){
            if('A' == s[i])
                hash = hash *10ll + 1;
            else if('C' == s[i])
                hash = hash *10ll + 2;
            else if('G' == s[i])
                hash = hash *10ll + 3;
            else if('T' == s[i])
                hash = hash *10ll + 4;
        }//cout<<hash << endl;
        p3a[hash]++;
        for(i=10;i<l;i++){
            hash = hash%mod;
            if('A' == s[i])
                hash = hash *10ll + 1;
            else if('C' == s[i])
                hash = hash *10ll + 2;
            else if('G' == s[i])
                hash = hash *10ll + 3;
            else if('T' == s[i])
                hash = hash *10ll + 4;
            p3a[hash]++;
            //cout<<hash<< endl;
        }
        for(it=p3a.begin();it!=p3a.end();it++){
            if(it->second > 1){
                ans.push_back(convertDNA(it->first));
            }
        }
        return ans;
    }
};