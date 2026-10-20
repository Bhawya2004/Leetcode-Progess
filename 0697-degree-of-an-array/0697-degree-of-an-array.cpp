class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> freq;
        unordered_map<int,int> first;
        unordered_map<int,int> last;
        
        for(int i:nums){
            freq[i]++;
        }
        for(int i=0;i<n;i++){
            last[nums[i]]=i;
        }
        for(int i=0;i<n;i++){
            if(first.find(nums[i])==first.end()){
                first[nums[i]]=i;
            }
        }
        int maxD=0;
        for(auto p:freq){
            int deg=p.second;
            if(deg>maxD){
                maxD=deg;
            }
        }
        int mini_len=n;
        for(auto p:freq){
            if(p.second==maxD){
                int ele=p.first;
                int len=last[ele]-first[ele]+1;
                mini_len=min(mini_len,len);
            }
        }
        return mini_len;
    }
};