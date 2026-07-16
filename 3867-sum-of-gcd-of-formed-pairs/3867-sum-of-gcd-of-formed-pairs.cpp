class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int mx=INT_MIN;
        vector<int> prefixGCD(n);
        for(int i=0;i<n;i++){
            if(nums[i]>mx){
                mx=nums[i];
            }
            prefixGCD[i]=gcd(nums[i],mx);
        }
        sort(prefixGCD.begin(),prefixGCD.end());
        int l=0,r=n-1;
        long long sumpair=0;
        while(l<r){
            int gcdpair=gcd(prefixGCD[l],prefixGCD[r]);
            sumpair+=gcdpair;
            l++;
            r--;
        }
        return sumpair;
    }
};