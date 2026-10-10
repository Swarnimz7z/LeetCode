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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int i=1;
        if(head->next==nullptr){
            head=nullptr;
            return head;
        }
        while(temp->next!=nullptr){
            temp=temp->next;
            i++;
        }
        cout<<i<<endl;
        temp=head;
        int k=1;
        if(i==n){
            head=head->next;
            return head;
        }
        for(int j=1;j<i-n;j++){
            temp=temp->next;
            cout<<temp->val<<endl;
        }
        temp->next=temp->next->next;
    return head;
    }
};