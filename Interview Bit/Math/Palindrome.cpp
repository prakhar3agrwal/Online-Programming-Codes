int Solution::isPalindrome(int a) {
    int i,j=0;
    if(a<0)
    return 0;
    i=a;
    while(i>0){
        j=j*10+(i%10);
        i/=10;
    }
    
    if(j==a)return 1;
    return 0;
}

