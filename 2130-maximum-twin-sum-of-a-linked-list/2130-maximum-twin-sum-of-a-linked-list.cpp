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
    int pairSum(ListNode* head) {
        ListNode*q=head;
        int mx=0;
        vector<int>v;
        while(q){
            v.push_back(q->val);
            q=q->next;
         }
        int n=v.size();
        int i=0;
        int m=(n/2)-1;
        while(i<=m)
        {
            int sum=0;
            sum=v[i]+v[n-1-i];
          mx=max(sum,mx);
           i++;
        }
      return mx;
    }
};