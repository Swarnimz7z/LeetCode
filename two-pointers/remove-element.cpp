class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int l=size(nums);
        int k=0;
        for(int i=0;i<l;i++){
            auto it=find(nums.begin(),nums.end(),val);
               if (it!=nums.end()){
                nums.erase(it);
               }
            else{
                k++;
            }
        }
        return k;
    }
};