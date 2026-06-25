class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int count_sub=0;
            for(int j=i;j<n;j++){
                if(nums[j]==target){
                    count_sub++;
                }
                if(count_sub>(j-i+1)/2){
                    count++;
                }
            }
        }
        return count;
    }
};