class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> x;
        int n=boxes.length();
        for(int i=0;i<n;i++){
            int z=0;
            for(int j=0;j<n;j++){
                if(boxes[j]=='1')
                z=z+abs(i-j);
            }
            x.push_back(z);
        }
        return x;
    }
};