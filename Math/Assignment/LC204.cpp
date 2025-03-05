// Problem : Count Primes (LeetCode 204)

class Solution {
public:
    int countPrimes(int n) {
        if(n<=2){
            return 0;
        }
        vector<bool>prime(n+1,true);
        for(int i=2;i*i<n;i++){
            if(prime[i]){
                for(int j=2;i*j<n;j++){
                    prime[i*j]=false;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){
            if(prime[i]){
                count++;
            }
        }
        return count;
        
    }
};

//use sieve of erosthenes to find the primes upto n and count them.