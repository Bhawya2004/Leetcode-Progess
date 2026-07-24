class Solution {
public:
    int cal_xor(int a,int b){
        return a xor b;
    }
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                st.insert(cal_xor(nums[i],nums[j]));
            }
        }
        unordered_set<int> res;
        for(int pair:st){
            for(int i:nums){
                res.insert(cal_xor(pair,i));
            }
        }
        return res.size();
    }
};