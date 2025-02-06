// Problem: Closest Primes (LeetCode 2523)

class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int>primes;
        vector<bool>isPrime(right+1,true);
        isPrime[0]=isPrime[1]=false;
        for(int i=2;i*i<=right;i++){
            if(isPrime[i]){
                for(int j=i*i;j<=right;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        for(int i=left;i<=right;i++){
            if(isPrime[i]){
                primes.push_back(i);
            }
        }
        int min=0;
        int max=INT_MAX;
        for(int i=1;i<primes.size();i++){
            if(primes[i]-primes[i-1]<(max-min)){
                min=primes[i-1];
                max=primes[i];
            }
        }
        if(min!=0 && max!=INT_MAX){
            return {min,max};
        }
            return {-1,-1};
    }
};