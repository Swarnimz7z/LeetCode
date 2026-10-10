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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* z=head;
        int x=-1;
        int c=0;
        if(head==nullptr){
            return head;
        }
        while(slow!=nullptr){

            if(fast->next==nullptr || fast->next->next==nullptr){
                cout<<0;
                return nullptr;
            }
            slow=slow->next;
            
            fast=fast->next->next;
            
            if(slow==fast){
                x=1;
                break;
            }
        }
        if(x==0)
        return nullptr;
        if(x==1){
            while(true){
                if(z==slow)
                break;
                z=z->next;
                slow=slow->next;
            }
        }
        return slow;
    }
};