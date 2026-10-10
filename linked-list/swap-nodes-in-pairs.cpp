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
    ListNode* swapPairs(ListNode* head) {
        ListNode* temp=head;
        if(head==nullptr){
            return head;
        }
        while(temp->next!=nullptr){
            swap(temp->val,temp->next->val);
            if(temp->next->next==nullptr){
                break;
            }
            else{
            temp=temp->next->next;
            }
        }
        return head;
    }
};