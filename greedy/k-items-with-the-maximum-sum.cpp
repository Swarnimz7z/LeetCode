class Solution {
public:
    int kItemsWithMaximumSum(int numOnes, int numZeros, int numNegOnes, int k) {
        int s=0;
        if(k<=numOnes){
            s=k;
            return s;
        }
        else if(k>numOnes && k<=numOnes+numZeros){
            s=numOnes;
            return s;
        }
        else if(k>numOnes+numZeros){
            s=s+numOnes+(k-(numOnes+numZeros))*-1;
            return s;
        }
        return s;
    }
};