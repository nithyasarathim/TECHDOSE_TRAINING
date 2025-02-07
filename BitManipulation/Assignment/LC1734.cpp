// Problem : Decode XORed Permutation (LeetCode 1734)

class Solution {
public:
    int xorVal(int n){
        if(n%4==0) return n;
        if(n%4==1) return 1;
        if(n%4==2) return n+2;
        if(n%4==3) return 0;
        return 0;
    }
    vector<int> decode(vector<int>& encoded) {
        vector<int>ans;
        int xorEnc=0;
        int n=encoded.size()+1;
        for(int i=0;i<n-1;i+=2){
            xorEnc^=encoded[i];
        }
        int xorFull=xorVal(n);
        int ele=xorFull^xorEnc;
        ans.push_back(ele);
        for(int i=n-2;i>=0;i--){
            ele=ele^encoded[i];
            ans.push_back(ele);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};

// Time Complexity: O(n)
// Space Complexity: O(n)