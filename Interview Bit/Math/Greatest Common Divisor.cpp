int solve(int a, int b){
    if(0 == b)
    return a;
    return solve(b,a%b);
}

int Solution::gcd(int a, int b) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    return solve(a,b);
}
