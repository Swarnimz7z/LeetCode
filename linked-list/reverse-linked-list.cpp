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
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr)
        return head;
        ListNode* temp=head;
        stack<int> x;
        while(temp!=nullptr){
            x.push(temp->val);
            temp=temp->next;
        }
        temp=head;
        while(temp!=nullptr){
            temp->val=x.top();
            x.pop();
            temp=temp->next;
        }
        return head;
    }
};