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
    void reorderList(ListNode* head) {
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* ziffy=slow;

        while(fast!=nullptr && fast->next!=nullptr){
            ziffy=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        
        ziffy->next=nullptr;
        ziffy=head;
        ListNode* prev=nullptr;

        while(slow!=nullptr)
        {
            ListNode* temp=slow->next;
            slow->next=prev;
            prev=slow;
            slow=temp;
        }

        while(ziffy!=nullptr && prev!=nullptr){
            ListNode* gif=ziffy->next;
            if(prev!=nullptr){
            ListNode* temp=prev->next;
            ziffy->next=prev;
            prev->next=gif;
            if(gif==nullptr && temp!=nullptr){
                prev->next=temp;
                break;
            }
            prev=temp;
            }
            ziffy=gif;
        }
    }
};