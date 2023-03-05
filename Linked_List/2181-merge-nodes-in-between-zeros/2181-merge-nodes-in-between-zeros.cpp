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
    ListNode* mergeNodes(ListNode* head) {
    
      ListNode*p = head,*q = head;
      ListNode* ans = q;
      int x = 0;
        
      while(p!= NULL){
            x = 0;
            p = p->next;
            if(!p)break;
            while(p->val!=0){
                x += p->val;
                p = p->next;
            }
            // p = p->next;
            q->val = x;
            ans = q;
            q = q->next;
        }
        ans->next = NULL;
        return head;
        
    }
};