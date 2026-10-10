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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* x=l1;
        ListNode* y=l2;
        queue<int> x1;
        queue<int> y1;
        ListNode* z=new ListNode();
        ListNode* v=z;
        while(x!=nullptr){
            x1.push(x->val);
            x=x->next;
        }
        while(y!=nullptr){
            y1.push(y->val);
            y=y->next;
        }
        int c=0;
        int p=0;
        int q=0;
        while(x1.empty()==false||y1.empty()==false){
            ListNode* temp=new ListNode();
            if(x1.empty()==false){
                p=x1.front();
                x1.pop();
            }
            else{
                p=0;
            }
            if(y1.empty()==false){
                q=y1.front();
                y1.pop();
            }
            else{
                q=0;
            }
            temp->val=(p+q+c)%10;
            c=(p+q+c)/10;
            if(z==nullptr){
            z=temp;
            }
            else{
                z->next=temp;
                z=z->next;
            }
        }
        if(c){
            ListNode* s=new ListNode(c);
            z->next=s;
        }

        return v->next;
        
    }
};