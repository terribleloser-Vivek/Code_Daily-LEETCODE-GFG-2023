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
        
         if(head==NULL)
      {
          return false;
      }
      
      ListNode* temp = head;  
      vector<int>v;
        while(temp!=NULL)
        {
            v.push_back(temp->val);
            temp=temp->next;
        }
       
        int j= v.size()-1;
       for(int i=0;i<v.size() && i<j ;i++)
       {
           if(v[i]!=v[j])
           {
               return false;
           }
           j--;
       }  
        return true; 
    }
};