class Solution {
public:
    int closestTarget(vector<string>& words, string target, int startIndex) {
        int n=words.size();
        int len=INT_MAX;

        for(int j=0;j<n;j++){
            if(words[(startIndex+j)%n]==target)
            len=min(len,j);
            if(words[(startIndex+n-j)%n]==target)
            len=min(len,j);
        }
        return len==INT_MAX?-1:len;
    }
};