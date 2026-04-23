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
    ListNode* reverseList(ListNode* head) {
        ListNode* L = nullptr;
        ListNode* M = nullptr;
        ListNode* R = head;
        while(R ){
            M = R;
            R = R->next;
            M->next = L;
            L = M;
        }
        head = M;
        return head;
        
    }
};
