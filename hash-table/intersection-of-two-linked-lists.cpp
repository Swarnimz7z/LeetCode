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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* temp=headA;
        while(temp!=nullptr){
            ListNode* temp1=headB;
            while(temp1!=nullptr){
                if(temp==temp1)
                return temp;
                temp1=temp1->next;
            }
            temp=temp->next;
        }
        return nullptr;

    }
};