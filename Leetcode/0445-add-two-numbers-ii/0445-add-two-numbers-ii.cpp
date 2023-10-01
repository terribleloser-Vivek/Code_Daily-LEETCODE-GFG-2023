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
        // Reverse both list
        l1 = reverse(l1);
        l2 = reverse(l2);
        
        ListNode *temp=new ListNode();
        ListNode *point=temp;
        
     
     int carry=0,sum;   
        while(l1!=NULL || l2!=NULL)
        { sum=0;
            if(l1)
           { sum = sum+l1->val;
           }
          if(l2)
           { sum = sum+l2->val;
           }
         sum=sum+carry;
         point->val=sum%10;
         carry=sum/10;
         
         if(l1)
           { l1=l1->next;
           }
         if(l2)
           { l2=l2->next;
           }
        
         if(l1!=NULL || l2!=NULL)
            {
                point->next=new ListNode();
                point=point->next;
            }
                  
        }
        
        if(carry>0)
        {
            point->next=new ListNode();
            point->next->val=carry;
        }
     
        temp=reverse(temp);
        
        return temp;
        
        
        
    }
    
   
    
    ListNode* reverse(ListNode* head)
    {
         if(!head)
               return NULL;
         if(!head->next) 
               return head;
        
        ListNode* Prev = nullptr;
        ListNode* Next = nullptr;
        ListNode* Curr = head;
        
        while(Curr){
            Next = Curr->next;
            Curr->next = Prev;
            Prev = Curr;
            Curr = Next;
        }
        return Prev; 
    }
};