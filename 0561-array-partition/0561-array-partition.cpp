class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=2){
            int mine=min(nums[i],nums[i+1]);
            sum+=mine;
        }
        return sum;
    }
};