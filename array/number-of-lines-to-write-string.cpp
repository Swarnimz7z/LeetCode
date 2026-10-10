class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int sum=0;
    unordered_map<char,int> z;
    for(char c='a';c<='z';c++){
        z[c]=widths[sum];
        sum++;
    }
    sum=0;
    int l=1;
    int ch=0;
    for(int i=0;i<s.length();i++){
        if(sum+z[s[i]]>100){
            sum=z[s[i]];
            l++;
        }
        else{
            sum=sum+z[s[i]];
        }
    }
    cout<<sum<<endl;
    widths.clear();
    widths.push_back(l);
    widths.push_back(sum);
    return widths;
    }
};