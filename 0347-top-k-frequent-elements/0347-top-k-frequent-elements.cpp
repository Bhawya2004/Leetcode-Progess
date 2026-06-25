class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i:nums){
            mp[i]++;
        }
        vector<pair<int,int>> freq;
        for(auto pair:mp){
            freq.push_back({pair.second,pair.first});
        }
        sort(freq.begin(),freq.end(),greater<pair<int,int>>());
        vector<int> res;
        for(int i=0;i<k;i++){
            res.push_back(freq[i].second);
        }
        return res;
    }
};