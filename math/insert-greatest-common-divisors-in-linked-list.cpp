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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
        return head;
        ListNode* temp=head;
        while(temp->next!=nullptr){
            ListNode* z=temp->next;
            int x=gcd(temp->val,z->val);
            ListNode* v=new ListNode(x);
            temp->next=v;
            v->next=z;
            temp=v->next;
        }
        return head;
    }
};