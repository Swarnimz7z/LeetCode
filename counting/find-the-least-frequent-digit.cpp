class Solution {
public:
    int getLeastFrequentDigit(int n) {
      map<char,int> x;
      string s=to_string(n);
      char v;
      int z=INT_MAX;
      for(auto it:s){
        x[it]++;
      }
      for(auto it:x){
        if(it.second<z){
            z=it.second;
            v=it.first;
        }
      }
      z=v-'0';
      return z;  
    }
};