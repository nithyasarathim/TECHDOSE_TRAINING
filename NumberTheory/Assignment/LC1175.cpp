class Solution {
public:
    long long permutate(int count, int MOD){
        long long ans=1;
        for(int i=2;i<=count;++i){
            ans=(ans*i)%MOD;
        }
        return ans;
    }
    int numPrimeArrangements(int n) {
        int MOD=1000000000 + 7;
        int count=0; 
        for(int i=2;i<=n;++i){
            bool isPrime=true;
            for(int j=2;j<=sqrt(i);j++){
                if(i%j==0){
                    isPrime=false;
                    break;
                }
            }
            if(isPrime){
                count++;
            }
        }
        return (permutate(count,MOD)*permutate(n-count, MOD))%MOD;

    }
};
