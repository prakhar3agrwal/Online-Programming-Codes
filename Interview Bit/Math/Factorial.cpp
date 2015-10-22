int Solution::trailingZeroes(int a) {
    int i=0;
    while(a>0){
        i+=a/5;
        a=a/5;
    }
    
    return i;
}

