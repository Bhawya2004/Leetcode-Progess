class Solution {
public:
    long long sumAndMultiply(int n) {
        int temp=n;
        long long x=0;
        long long sum=0;
        int r=1;
        while(temp>0){
            int digits=temp%10;
            if(digits>0){
                x=digits*r+x;
                sum+=digits;
                r*=10;
            }
            temp=temp/10;
        }
        return x*sum;
    }
};