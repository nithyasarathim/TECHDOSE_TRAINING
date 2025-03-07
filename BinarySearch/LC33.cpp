//Leetcode 33. Search in Rotated Sorted Array

class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int l=0;
        int h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if(arr[mid]==target){
                return mid;
            }else if(arr[mid]>=arr[l]){
                if(target>=arr[l] && target<=arr[mid]){
                    h=mid-1;
                }else{
                    l=mid+1;
                }
            }else{
                if(target<=arr[h] && target>=arr[mid]){
                    l=mid+1;
                }else{
                    h=mid-1;
                }
            }
        }
        return -1;
    }
};

// Time Complexity: O(logn)
// Space Complexity: O(1)
// The array is rotated, so we can't use the binary search template 1 or 2.
// We need to check the mid element with its neighbours.
// If the mid element is greater than its neighbours, then the left part is sorted.
// If the mid element is less than its neighbours, then the right part is sorted.   
// If the target lies in the sorted part, then we can apply binary search on that part.
// Else we can search in the unsorted part.
// If the target is not found, return -1.   