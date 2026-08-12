class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int i=0,j=0;
        unordered_map<int,int> map;
        int res=0;
        while(j<n){
            map[nums[j]]++;
            while(i<j && map[nums[j]]>k){
                map[nums[i]]--;
                i++;
            }
            res=max(res,j-i+1);
            j++;
        }
        return res;
    }
};