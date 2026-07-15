class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int res=numBottles;
        int quo=0,rem=0;
        while(numBottles>=numExchange){
            quo=numBottles/numExchange;
            rem=numBottles%numExchange;
            res+=quo;
            numBottles=quo+rem;
        }
        return res;
    }
};