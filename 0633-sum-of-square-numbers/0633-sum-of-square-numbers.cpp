class Solution {
public:
    bool judgeSquareSum(int c) {
        long long start=0,end=sqrt(c);
        while(start<=end){
            long long a=start,b=end;
            long long sum=((a*a)+(b*b));
            if(sum==c)return true;
            else if(sum>c) end--;
            else if(sum<c) start++;
        }
        return false;
    }
};