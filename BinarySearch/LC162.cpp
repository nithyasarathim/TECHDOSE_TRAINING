//LeetCode 162. Find Peak Element

class Solution {
public:
    int findPeakElement(vector<int>& arr) {
        int n=arr.size();
        if(n==1) return 0;
        if(n==2) return (arr[0]>arr[1]?0:1);
        int l=0,h=n-1;
        while(l<=h){
            int mid=l+(h-l)/2;
            if((mid==0||arr[mid]>arr[mid-1])&&(mid==n-1||arr[mid]>arr[mid+1])){
                return mid;
            }
            else if(mid>0 && arr[mid]<arr[mid-1]){
                h=mid-1;
            }else{
                l=mid+1;
            }
        }
        return -1;
    }
};

// Time Complexity: O(logn)
// Space Complexity: O(1)

// The peak element can be anything, so we can't use the binary search template 1 or 2.
// We need to check the mid element with its neighbours.
// If the mid element is greater than its neighbours, then it is a peak element.