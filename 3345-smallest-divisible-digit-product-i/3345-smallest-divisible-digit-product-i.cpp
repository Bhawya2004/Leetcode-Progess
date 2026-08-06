class Solution {
public:
    int check(int n){
        int temp=n;
        int mul=1;
        while(temp>0){
            int dig=temp%10;
            mul*=dig;
            temp/=10;
        }
    return mul;
    }
    int smallestNumber(int n, int t) {
        int temp=n;
        int mul=check(n);
        while(mul%t!=0){
            temp=temp+1;
            mul=check(temp);
        }
        return temp;
    }
};