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
    ListNode* middleNode(ListNode* head) {
        ListNode* temp=head;
        ListNode* fast=head;
        if(fast->next!=nullptr)
        if(fast->next->next==nullptr){
        temp=temp->next;
        return temp;
        }
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            temp=temp->next;
            fast=fast->next->next;
            if(fast->next!=nullptr)
            if(fast->next->next==nullptr)
            temp=temp->next;
        }
        return temp;
    }
};