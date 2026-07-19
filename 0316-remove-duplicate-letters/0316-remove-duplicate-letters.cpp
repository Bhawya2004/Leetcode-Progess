class Solution {
public:
    string removeDuplicateLetters(string s) {
        int n=s.length();
        vector<int> lastIndex(26);
        string res;
        vector<bool> taken(26,false);
        for(int i=0;i<n;i++){
            int ind=s[i]-'a';
            lastIndex[ind]=i;
        }
        for(int i=0;i<n;i++){
            char ch=s[i];
            int ind=s[i]-'a';
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