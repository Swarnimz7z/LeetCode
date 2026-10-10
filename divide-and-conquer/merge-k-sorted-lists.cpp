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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        multiset<int> x;
        for(int i=0;i<n;i++){
            ListNode* temp=lists[i];
            while(temp!=nullptr)
            {   
                x.insert(temp->val);
                temp=temp->next;
            }
        }
        if(x.empty())
        return nullptr;
        ListNode* head=nullptr;
        ListNode* v;
        for(auto it:x){
            ListNode* z=new ListNode(it);
            if(head==nullptr){
            head=z;
            v=head;
            }
            else{
            head->next=z;
            head=head->next;
            }
        }
        return v;

    }
};