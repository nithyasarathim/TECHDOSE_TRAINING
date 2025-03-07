//Leetcode 34. Find First and Last Position of Element in Sorted Array

class Solution {
public:
    int bound(vector<int>& arr,int k,bool bias){
        int l=0;
        int r=arr.size()-1;
        int i=-1;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(arr[mid]>k) r=mid-1;
            else if(arr[mid]<k) l=mid+1;
            else {
                i=mid;
                if(bias){
                    r=mid-1;
                }else{
                    l=mid+1;
                }
            }
        }
        return i;
    }
    vector<int> searchRange(vector<int>& arr, int k) {
        int l=bound(arr,k,true);
        int r=bound(arr,k,false);
        return {l,r};
    }
};

// Time Complexity: O(logn)
// Space Complexity: O(1)
// The array is sorted, so we can use the binary search template 1.
// We need to find the first and last occurrence of the target element.
// We can find the first occurrence by moving the right pointer to the left when we find the target element.
// We can find the last occurrence by moving the left pointer to the right when we find the target element.
// If the target element is not found, return {-1,-1}.