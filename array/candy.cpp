class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        int x=0;
        int y=0;
        int sum=n;
        int i=1;
        while(i<n){
            while(i<n && ratings[i]==ratings[i-1])
            i++;
            x=0;
           while(i<n && ratings[i]>ratings[i-1]){
            x++;
            sum+=x;
            i++;
           }
           y=0;
            while(i<n && ratings[i]<ratings[i-1]){
            y++;
            sum+=y;
            i++;
           }
           sum-=min(x,y);
        }
        cout<<x<<" "<<y;
        return sum;
    }
};