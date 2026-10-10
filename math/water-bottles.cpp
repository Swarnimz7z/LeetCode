class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int full=numBottles;
        int z=numExchange;
        int empty=0;
        int drink=0;
        int curemp=0;
        while(full!=0 || empty>=z){
            drink+=full;
            empty+=full;
            full=empty/z;
            curemp=empty%z;
            empty=empty-z*full;
            
        }
        return drink;
    }
};