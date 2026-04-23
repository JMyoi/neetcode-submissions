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
      //recursive solution
      return recursiveReverse(nullptr, head);
    }
    ListNode* recursiveReverse(ListNode* prev, ListNode* curr){
        if(curr == nullptr){
            return prev;
        }
        ListNode* temp = curr->next; // keeps track of the rest of the list 
        curr->next = prev; 
        return recursiveReverse(curr, temp);
    }
};






