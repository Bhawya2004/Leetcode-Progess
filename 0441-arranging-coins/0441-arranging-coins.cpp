class Solution {
public:
    int arrangeCoins(int n) {
        int count=0;
        int row=1;
        while(n>=row){
            n=n-row;
            row++;
            count++;
        }
        return count;
    }
};