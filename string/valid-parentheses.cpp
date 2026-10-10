class Solution {
public:
    bool isValid(string s) {
        stack<char> x;
        for(auto it:s){
            if(it=='[' || it=='(' || it=='{'){
                x.push(it);
            }
            else{
                if(x.empty())
                return 0;

                char z=x.top();
                if((z=='[' && it==']')  || (z=='{' && it=='}') || (z=='(' && it==')'))
                x.pop();
                else
                return false;
            }
        }
        if(x.empty())
        return true;
        else
        return 0;
    }
};