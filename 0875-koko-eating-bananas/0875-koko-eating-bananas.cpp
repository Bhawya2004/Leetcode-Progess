class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int mx= *max_element(piles.begin(),piles.end());
        int l=1,r=mx;
        while(l<r){
            int mid=(l+r)/2;
            int hours=0;
            for(int i=0;i<n;i++){
                int div=piles[i]/mid;
                hours+=div;
                if(piles[i]%mid!=0){
                    hours++;
                }
            }
            if(hours<=h){
                r=mid;
            }
            else{
                l=mid+1;
            }
        }
        return l;
    }
};