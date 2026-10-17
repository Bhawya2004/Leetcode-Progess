class Solution {
public:
    int digitsum(int n){
        int sum=0;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            n/=10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n=nums.size();
        //to sort number by digitsum first and by number if the digit sum are equal
        vector<pair<int,int>> v;
        for(int num:nums){
            v.push_back({digitsum(num),num});
        }
        sort(v.begin(),v.end());
        //to store correctly sorted array instead of changing the nums. 
        vector<int> afterSorted;
        for(auto p:v){
            afterSorted.push_back(p.second);
        }
        //to store the index of nums for swapping afterwards
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]=i;
        }
        int swap=0;
        //swaps misplaced elements into their correct positions and counts the minimum swaps needed to sort the array.
        for(int i=0;i<n;i++){
            int ex=afterSorted[i];
            int curr=nums[i];
            if(ex==curr)continue;
            int index=mp[ex];
            nums[i]=ex;
            nums[index]=curr;
            mp[ex]=i;
            mp[curr]=index;
            swap++;
        }
        
        return swap;
    }
};