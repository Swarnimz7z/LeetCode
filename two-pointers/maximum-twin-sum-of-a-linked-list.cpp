class Solution {
public:
    int pairSum(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *prev=nullptr;

        while(fast&&fast->next) {
            fast=fast->next->next;

            ListNode* x=slow->next;
            slow->next=prev;
            prev=slow;
            slow=x;
        }

        int z=0;
        ListNode *left=prev; 
        ListNode *right=slow;

        while(left){
            z=max(z,left->val+right->val);
            left=left->next;
            right=right->next;
        }

        return z;
    }
};