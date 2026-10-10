class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int x=0;

        while(l!=r){
            x=max(x,min(height[l],height[r])*abs(l-r));

            if(height[l]>height[r]){
            r--;
            }
            else
            l++;
        }

        return x;
    }
};