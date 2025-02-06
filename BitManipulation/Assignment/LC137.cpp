// Problem: Single Number II (LeetCode 137)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>map;
        for(int i: nums){
            map[i]++;
        }
        for(auto i:map){
            if(i.second==1)
                return i.first;
        }
        return -1;
    }
};