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
    ListNode* root;

    Solution(ListNode* head) {
    root=head;
    }
    
    int getRandom() {
        ListNode* head=root;
        int n=0;

        while(head){
            head=head->next;
            n++;
        }
        n=rand()%n;
        head=root;
        while(head->next!=nullptr&&n>0){
            n--;
            head=head->next;
        }
        return head->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */