class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<int> res;
        for(auto pair:mp){
            if(pair.second>n/3){
                res.push_back(pair.first);
            }
        }
        return res;
    }
};