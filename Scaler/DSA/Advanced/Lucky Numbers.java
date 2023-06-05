/*
Lucky number - No having 2 distinct prime divisors.
Count number of lucky numbers in range [1,A], inclusive.
*/

public class Solution {
    
    List<Integer> primes = new ArrayList<>();
    
    private void generatePrimes(){
        primes.add(2);
        boolean[] isPrime = new boolean[50001];
        Arrays.fill(isPrime, true);
        for(int i=2;i*i<=50000;i++){
            if(isPrime[i]==true){
                for(int j=i*i;j<=50000;j+=i){
                    isPrime[j] = false;
                }
            }
        }
        for(int i=3;i<=50000;i+=2){
            if(isPrime[i] == true){
                primes.add(i);
            }
        }
    }
    
    private boolean isLucky(int num){
        int ct = 0;
        int n = primes.size();
        for(int i=0;i<n;i++){
            // if(num==1){
            //     break;
            // }
            int curr = primes.get(i);
            if(num%curr==0){
                ct++;
                // while(num%curr==0){
                //     num/=curr;
                // }
            }
            if(ct>2){
                return false;
            }
        }
        return ct==2;
    }
    public int solve(int A) {
        int ans = 0;
        generatePrimes();
        for(int i=6;i<=A;i++){
            if(isLucky(i)){
                ans++;
            }
        }
        return ans;
    }
}
