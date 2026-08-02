class Solution {
public:
    int solve(vector<int>& nums,int i,int j){
        if(i>j)return 0;
        if(i==j) return nums[i];
        int take_i=nums[i]+min(solve(nums,i+1,j-1),solve(nums,i+2,j));
        int take_j=nums[j]+min(solve(nums,i+1,j-1),solve(nums,i,j-2));
        return max(take_i,take_j);
    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        for(int num:nums){
            sum+=num;
        }
        int player_1=solve(nums,0,n-1);
        int player_2=sum-player_1;
        if(player_1>=player_2){
            return true;
        }
        else{
            return false;
        }
    }
};