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
    
        ListNode* node = head;
        int size = 0;

        while(node!=NULL) {
            size++;
            node = node->next;
        }

        if (size == n) {
            return head->next;
        }

         //nth node from end is (size-n) + 1 node from beginning. 

         ListNode* t = head;
         int i = 1;
         int beg = size-n;

         while(i<beg) {
            t = t->next;
            i++;

         }

         ListNode* removeThis = t->next;
         t->next = removeThis->next;


         return head;


       
    }
};
