//bitwise AND of numbers range (LeetCode 201)

class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int count=0;
        for(int i=0;i<32;i++){
            if(left==right){
                return (left&right)<<count;
            }
            else{
                left>>=1;
                right>>=1;
                count++;
            }
        }
        return 0;
    }
};

//it is bitwise and if the value gets swapped then the AND surely returns 0.
//here we find the common prefix of the two numbers and then shift it to the left by the count.