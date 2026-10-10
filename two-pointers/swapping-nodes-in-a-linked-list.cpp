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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int i=1;
        while(temp->next!=nullptr){
            i++;
            temp=temp->next;
        }
        if(i==k){
            swap(head->val,temp->val);
            return head;
        }
        temp=head;
        ListNode* x=head;
        for(int j=1;j<=i-k;j++){
            temp=temp->next;
        }
        for(int j=1;j<k;j++){
            x=x->next;
        }
        cout<<x->val<<endl;
        cout<<temp->val<<endl;
        swap(temp->val,x->val);
        return head;
    }
};