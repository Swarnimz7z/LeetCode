class Solution {
public:
    string longestPalindrome(string s) {
        string v="@";
        int odd=s.length();
        int x=odd;
        odd=0;
        int even=1;

        for(auto it:s)
        v=v+"#"+it;

        string temp="#$";
        v=v+temp;

        int n=v.length();
        vector<int> p(n,0);

        int l=0,r=0;

        for (int i=1;i<n-1;i++){
            
            // mirror of i around center (l + r)/2
            int mirror =l+r-i;

            // initialize p[i] based on its mirror 
            // if within bounds
            if(i<r)
                p[i]=min(r-i,p[mirror]);

            // expand palindrome centered at i
            while(v[i+1+p[i]]==v[i-1-p[i]]){
                p[i]++;
            }

            // update [l, r] if the palindrome expands 
            // beyond current r
            if (i+p[i]>r) {
                l=i-p[i];
                r=i+p[i];
            }
        }
        int z=1;
        int start=0;
        for(int i=0;i<x;i++){
            int pos=2*i+2+odd;
            int oddl=p[pos];
            if(oddl>z){
                z=oddl;
                start=i-z/2;
            }
            pos=2*i+2+even;
            int evenl=p[pos];
            if(evenl>z){
                z=evenl;
                start=i-z/2+1;
            }
        }

        return s.substr(start,z);
    }
};