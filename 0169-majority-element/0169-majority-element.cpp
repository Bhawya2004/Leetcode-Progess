class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        int res;
        for(auto pair:mp){
            if(pair.second>n/2){
                res=pair.first;
            }
        }
        return res;
    }
};