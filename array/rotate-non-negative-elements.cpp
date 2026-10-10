class Solution {
public:
    void reverse(vector<int>&nums,int x,int y){
        for(int i=0;i<(y-x)/2;i++){
            swap(nums[x+i],nums[y-i-1]);
        }
    }
    vector<int> rotateElements(vector<int>& nums, int k) {
        vector<int> s;
        int n=nums.size();

        for(int i=0;i<n;i++)
        if(nums[i]>-1)
        s.push_back(nums[i]);

        if(s.size()==0)
        return nums;

        k=k%s.size();
        reverse(s,0,k);
        reverse(s,k,s.size());
        reverse(s,0,s.size());

        int x=0;
        for(int i=0;i<n;i++){
            if(nums[i]>-1)
            {
                nums[i]=s[x];
                x++;
            }
        }
        return nums;
    }
};