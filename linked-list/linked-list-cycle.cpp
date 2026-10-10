/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* fast=head;
        int i=0;
        ListNode* slow=head;
        if(head==nullptr){
            i=0;
        }
        else{
        while(fast->next!=nullptr && fast->next->next!=nullptr){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                i=1;
                break;
            }
        }
        }
        return i;
    }
};