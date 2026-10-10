class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> x;
        int p=0;
        int q=0;
        while(x.size()!=nums.size()){
            if(x.size()%2==0)
            {if(nums[p]>=0)
                x.push_back(nums[p]);
                p++;
            }
            else{
            {if(nums[q]<0)
                x.push_back(nums[q]);
                q++;
            }
            }
        }
        return x;
    }
};