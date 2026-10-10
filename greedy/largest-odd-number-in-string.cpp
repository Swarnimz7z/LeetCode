class Solution {
public:
    string largestOddNumber(string num) {
        int c=num.length()-1;
        while((num[c]-'0')%2==0){
            c--;
            if(c<0)
            break;
        }
        return num.substr(0,c+1);
    }
};