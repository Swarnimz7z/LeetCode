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
    ListNode* partition(ListNode* head, int z) {
        ListNode*temp=head;
        ListNode*a=new ListNode(1);
        ListNode*x=a;

        ListNode*b=new ListNode(1);
        ListNode*y=b;

        while(temp){
            if(temp->val<z){
            a->next=temp;
            a=a->next;
            }
            else{
            b->next=temp;
            b=b->next;
            }
            temp=temp->next;
        }
        x=x->next;
        y=y->next;
        b->next=nullptr;
        a->next=y;
        if(x)
        return x;
        return y;
    }
};