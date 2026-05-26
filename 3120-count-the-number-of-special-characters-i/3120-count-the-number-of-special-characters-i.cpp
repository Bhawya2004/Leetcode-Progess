class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_map<char,int> mp;
        for(char ch:word){
            mp[ch]++;
        }
        char ch='a';
        int count=0;
        while(ch<='z'){
            if(mp[ch]>0 && mp[toupper(ch)]>0){
                count++;
            }
            ch++;
        }
        return count;
    }
};