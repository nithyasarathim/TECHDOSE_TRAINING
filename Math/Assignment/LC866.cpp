// Problem: Prime Palindrome (LeetCode 866)

class Solution {
public:
    bool isPrime(int n){
        if(n<2) return false;
        if(n%2==0) return false;
        for(int j=3;j*j<=n;j++){
            if(n%j==0){
                return false;
            }
        }
        return true;        
    }
    bool isPalindrome(int n){
        int temp=n;
        int rev=0;
        while(temp>0){
            rev*=10;
            rev+=temp%10;
            temp/=10;
        }
        return n==rev;
    }
    int primePalindrome(int n) {
        if(n==1 || n==2){
            return 2;
        }
        for(int i=n;;i++){
            if((i>1e3 && i<1e4)||(i>1e5 && i<1e6) || (i>1e7&&i<1e8)){
                i = pow(10,ceil(log10(i)));
            }
            if(isPrime(i)&&isPalindrome(i)){
                return i;
            }
        }
        return -1;
    }
};

// Logic :
// All the even digit palindromes are divisible by 11, so we can skip them.
// So we can check only odd digit palindromes.