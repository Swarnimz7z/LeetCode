class Solution {
    public boolean isPalindrome(int x) {
        int n=x;
        int m=0;
        int s=0;
        while(n!=0){
            m=n%10;
            s=s*10+m;
            n=n/10;
        }
        if(s==x && x>=0){
            return true;
        }
        else{
            return false;
        }
    }
}