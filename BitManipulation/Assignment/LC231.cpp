// Problem: Power of Two (LeetCode 231)

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false;
        if((n&n-1) == 0){
            return true;
        }
        return false;
    }
};

//if n=4 is 100 and n-1=3 is 011, then n&n-1=0