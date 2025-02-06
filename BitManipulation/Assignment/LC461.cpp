//Problem: Hamming Distance (LeetCode 461)

class Solution {
public:
    int hammingDistance(int x, int y) {
        int res=x^y;
        int count=0;
        while(res!=0){
            if(res%2==1){
                count++;
            }
            res>>=1;
        }
    return count;
    }
};


// Time Complexity: O(1)
// Space Complexity: O(1)
// The hamming distance is the number of bits that are different in the two numbers.
//logic : XOR results 1 for the inverse digits,
// first XOR & then count the number of 1's in the result.