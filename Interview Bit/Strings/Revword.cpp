void Solution::reverseWords(string &a) {

    int i,j,k,l;
    l = a.length();
    i=0;
    string temp = "";
    vector<string> ans;
    while(a[i] != '\0'){
        if(a[i]>=97 && a[i]<=122)
        temp += a[i];
        else{
            if(temp.length()>0)
            ans.push_back(temp);
            temp = "";
        }
        i++;
    }
    if(temp.length()>0)
            ans.push_back(temp);
    string revstr = "";
    bool first = true;
    for(i=ans.size()-1;i>=0;i--){
        if(!first){
            revstr += " ";
        }
        else
        first = false;
        revstr += ans[i];
    }
    a = revstr;
}

