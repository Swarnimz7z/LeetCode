// The API isBadVerion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int m=1;
        while(!isBadVersion(m)){
            m++;
        }
        return m;
    }
};