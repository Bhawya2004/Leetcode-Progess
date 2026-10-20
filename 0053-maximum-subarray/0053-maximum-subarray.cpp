class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int curr=0;
        int maxs=INT_MIN;
        for(int i=0;i<n;i++){
            curr+=nums[i];
            maxs=max(curr,maxs);
            if(curr<0) curr=0;
        }
        return maxs;
        
    }
};