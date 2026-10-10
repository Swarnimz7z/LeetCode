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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        if(head==nullptr)
        return head;
        while(temp!=nullptr && temp->next!=nullptr){
            ListNode* x=temp;
            int c=0;
            while(temp!=nullptr && x->val==temp->val){
                temp=temp->next;
                c++;
            }
            if(c>1)
            x->val=101;
            x->next=temp;
        }

        while(head->val==101){
        if(head->next==nullptr)
        return head->next;
        head=head->next;
        }

        temp=head;
        while(temp!=nullptr){
            if(temp->next!=nullptr && temp->next->val==101)
            temp->next=temp->next->next;
            else
            temp=temp->next;
        }
        return head;
    }
};