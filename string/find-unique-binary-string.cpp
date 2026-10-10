class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        // string s="";
        // for(int i=0;i<nums.size();i++){
        //     int x=0;
        //     int z=0;
        //     for(int j=0;j<nums.size();j++){
        //         int itz=nums[j][i];
        //         if(itz=='0')
        //         x++;
        //         else
        //         z++;
        //     }
        //     if(x==z){
        //     if(i==0 || i==nums.size()-1 || i%2==1)
        //     s=s+"1";
        //     else
        //     s=s+"0";
        //     }
        //     else if(x>z)
        //     s=s+"1";
        //     else
        //     s=s+"0";
        // }
        unordered_map<string,int> z;
        for(auto it:nums)
        z[it]++;
        string s=nums[0];
        int i=0;
        while(z[s]!=0){
            if(i==nums.size())
            i=0;
            s[i]='0';
            if(z[s]==0)
            return s;
            s[i]='1';
            if(z[s]==0)
            return s;
            i++;
        }
        return s;
    }
};