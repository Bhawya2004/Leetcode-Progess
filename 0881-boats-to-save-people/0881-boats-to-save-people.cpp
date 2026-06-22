class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boat=0;
        int n=people.size();
        sort(people.begin(),people.end());
        int l=0,r=n-1;
        while(l<=r){
            int sum=people[l]+people[r];
            if(sum<=limit){
                l++;
                r--;
            }
            else if(sum>limit){
                r--;
            }
            boat++;
        }
        return boat;
    }
};