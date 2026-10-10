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
    void Reverse(ListNode* head,int k){
        
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* z=nullptr;
        ListNode* node=head;
        ListNode* prev=head;
        ListNode* joint;

        while(node!=nullptr){
            int c=0;
            ListNode* v=node;
            while(c!=k){
                if(v==nullptr)
                break;

                v=v->next;
                c++;
            }
            if(c!=k){
                cout<<1;
                break;
            }
            c=0;
            while(c!=k){
            if(node==nullptr)
            break;

            ListNode* temp=node->next;
            node->next=prev;
            prev=node;
            node=temp;
            
            c++;
            }

            if(z==nullptr)
            z=prev;
            else
            joint->next=prev;
            
            head->next=node;
            joint=head;
            prev=node;
            head=prev;
        }
        return z;
    }
};