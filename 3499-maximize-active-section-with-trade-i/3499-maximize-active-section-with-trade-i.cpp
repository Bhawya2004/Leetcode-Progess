class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.length();
        vector<pair<char,int>> block;
        int count=1;
        for(int i=0;i<n;i++){
            char curr=s[i];
            if(i!=n-1 && s[i+1]==curr){
                count++;
            }
            else{
                block.push_back({curr,count});
                count=1;
            }
        }
        int ones=0;
        for(int i=0;i<n;i++){
            char ch=s[i];
            if(ch=='1'){
                ones++;
            }
        }
        int maxgain=0;
        for(int i=0;i<block.size();i++){
            char ch=block[i].first;
            int freq=block[i].second;
            if(i>0 && i<block.size()-1){
                if(ch=='1' && block[i-1].first=='0' && block[i+1].first=='0'){
                    maxgain=max(maxgain,block[i-1].second+block[i+1].second);
                }
            }
        }
        return ones+maxgain;

    }
};