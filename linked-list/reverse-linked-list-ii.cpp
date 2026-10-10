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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==nullptr)
        return head;
        stack<int> x;
        int c=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            c++;
            if(c>=left && c<=right)
            x.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        c=0;
        while(c<=right && temp!=nullptr){
            c++;
            if(c>=left && x.empty()==false){
            temp->val=x.top();
            x.pop();
            }
            temp=temp->next;
        }
        return head;
    }
};