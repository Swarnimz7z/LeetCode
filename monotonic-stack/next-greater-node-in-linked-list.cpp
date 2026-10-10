/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> x;
        ListNode* temp=head;
        while(temp!=nullptr){
            x.push_back(temp->val);
            temp=temp->next;
        }
        int n=x.size();
        stack<int> z;
        vector<int> v(n,0);
        for(int i=n-1;i>=0;i--){
            while(z.empty()==false && z.top()<=x[i]){
            z.pop();
            }
            if(z.empty()){
                z.push(x[i]);
                continue;
            }
            v[i]=z.top();
            z.push(x[i]);
        }
        return v;
    }
};