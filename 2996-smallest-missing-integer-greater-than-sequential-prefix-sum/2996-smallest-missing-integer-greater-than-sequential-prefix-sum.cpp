class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n=nums.size();
        int prefix=nums[0];
        for(int j=1;j<n;j++){
            if(nums[j]==nums[j-1]+1){
                prefix+=nums[j];
            }
            else{
                break;
            }
        }
        unordered_set<int> st;
        for(int i:nums){
            st.insert(i);
        }
        while(st.find(prefix)!=st.end()){
            prefix++;
        }
        return prefix;
    }
};