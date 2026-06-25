class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                mp[nums[i]]++;
            }
        }
        int maxcount=-1,minfreq=-1;
        for(auto pair:mp){
            int element=pair.first;
            int count=pair.second;
            if(count>maxcount || (count==maxcount && element<minfreq)){
                maxcount=count;
                minfreq=element;
            }
        }
        return minfreq;
    }
};