class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            auto pair=mp.find(nums[i]);
            if(pair!=mp.end()){
                if(i-pair->second<=k){
                    return true;
                }
            }
            mp[nums[i]]=i;
        }
        return false;
    }
};