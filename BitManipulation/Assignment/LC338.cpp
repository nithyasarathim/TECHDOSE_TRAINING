// Counting bits  (LeetCode 338)

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>bits;
        if(n==0){
            return {0};
        }
        else if(n==1){
            return {0,1};
        }
        bits.push_back(0);
        bits.push_back(1);
        for(int i=2;i<=n;i++){
            if(i%2==0){
                bits.push_back(bits[i/2]);
            }else{
                bits.push_back(bits[i/2]+1);
            }
        }
        return bits;
    }
};


// Time Complexity: O(n)
// Space Complexity: O(n)
// logic is :
    // a even number has the same number of bits as its half
    // a odd number has 1 more bit than its half