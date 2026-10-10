class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.length();
        int m=needle.length();
        int x=-1;
        for(int i=0;i<n;i++){
            if(haystack.substr(i,m)==needle){
                x=i;
                break;
            }
        }
        return x;
    }
};