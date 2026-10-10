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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        int c=0;
        if(head==nullptr)
        return head;
        while(temp->next!=nullptr){
            temp=temp->next;
            c++;
        }
        c+=1;
        temp->next=head;
        temp=head;
        k=k%c;
        c=c-k;
        for(int i=0;i<c-1;i++){
            temp=temp->next;
        }
        head=temp->next;
        temp->next=nullptr;
        return head;
    }
};