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
    int getDecimalValue(ListNode* head) {
        int s=0;
        int x=0;
        ListNode* temp=head;
        while(temp!=nullptr){
            temp=temp->next;
            x++;
        }
        cout<<x;
        int y=0;
        temp=head;
        while(temp!=nullptr){
            y=y+temp->val*pow(2,x-1);
            temp=temp->next;
            x--;
        }
        return y;
    }
};