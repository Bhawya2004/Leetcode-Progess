class Solution {
public:
    int numberOfSubstrings(string s) {
        int a=-1,b=-1,c=-1;
        int count=0;
        for(int i=0;i<s.length();i++){
            char ch=s[i];
            if(ch=='a'){
                a=i;
            }
            else if(ch=='b'){
                b=i;
            }
            else if(ch=='c'){
                c=i;
            }
            int mine=min({a,b,c});
            count+=mine+1;
        }
        return count;
    }
};