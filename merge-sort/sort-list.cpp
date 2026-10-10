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
    ListNode* sortList(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        vector<int> x;
        ListNode* temp=head;
        while(temp!=nullptr){
            x.push_back(temp->val);
            temp=temp->next;
        }
        sort(x.begin(),x.end());
        temp=head;
        int c=0;
        while(temp!=nullptr){
            temp->val=x[c];
            temp=temp->next;
            c++;
        }
        return head;
    }
};