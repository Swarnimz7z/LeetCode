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
    bool isPalindrome(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        int x=1;
        vector<int>s1;
        if(head==nullptr){
            return head;
        }
        while(slow!=nullptr){
            s1.push_back(slow->val);
            slow=slow->next;
        }
        int n=s1.size();
        for(int i=0;i<n/2;i++){
            if(s1[i]==s1[n-i-1])
            x=1;
            else{
                x=0;
                break;
            }
        }
        return x;
    }
};