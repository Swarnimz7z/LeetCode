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
    ListNode* insertionSortList(ListNode* head) {
        if(head==nullptr){
            return head;
        }
        for(ListNode* temp1=head;temp1->next!=nullptr;temp1=temp1->next){
            for(ListNode* temp=head;temp->next!=nullptr;temp=temp->next){
                if(temp->val>=temp->next->val){
                    swap(temp->val,temp->next->val);
                }
            }
        }
        return head;
    }
};