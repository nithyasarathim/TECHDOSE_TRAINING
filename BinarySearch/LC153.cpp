//LeetCode 153. Find Minimum in Rotated Sorted Array

class Solution {
public:
    int findMin(vector<int>& arr) {
        int l=0;
        int h=arr.size()-1;
        while(l<h){
            int mid=l+(h-l)/2;
            if(arr[mid]>arr[h]) l=mid+1;
            else h=mid;
        }
        return arr[l];
    }
};

// Time Complexity: O(logn)
// Space Complexity: O(1)
// The array is rotated, so we can't use the binary search template 1 or 2.