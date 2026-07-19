class Solution {
public:
    string smallestSubsequence(string s) {
        int n=s.length();
        vector<int> lastIndex(26);
        for(int i=0;i<n;i++){
            int ind=s[i]-'a';
            lastIndex[ind]=i;
        }
        vector<bool> taken(26,false);
        string res;
        for(int i=0;i<n;i++){
            int ind=s[i]-'a';
            char ch=s[i];
            if(taken[ind]==true){
                continue;
            }
            while(res.length()>0 && res.back()>ch && lastIndex[res.back()-'a']>i){
                taken[res.back()-'a']=false;
                res.pop_back();
            }
            res.push_back(ch);
            taken[ind]=true;
        }
        return res;
    }
};