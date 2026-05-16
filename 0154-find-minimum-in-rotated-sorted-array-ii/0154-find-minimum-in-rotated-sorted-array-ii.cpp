class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0,h=n-1;
        int index=0;
        while(l<=h){
            while(l<h && nums[l]==nums[l+1])l++;
            while(h>l && nums[h]==nums[h-1])h--;

            int mid=(l+h)/2;
            if(nums[mid]<nums[index]){
                index=mid;
            }
            if(nums[mid]>nums[h]){
                l=mid+1;
            }
            else {
                h=mid-1;
            }
        }
        return nums[index];
    }
};