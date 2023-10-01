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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || !head->next || left == right) 
			return head;

		ListNode dummy(0), *prev = &dummy, *curr = head;
		dummy.next = head;
		for (int i = 1; i < left; i++) {
			prev = curr;
			curr = curr->next;
		}

		ListNode *tail = curr, *prev2 = nullptr;
		for (int i = left; i <= right; i++) {
			ListNode *next = curr->next;
			curr->next = prev2;
			prev2 = curr;
			curr = next;
		}

		prev->next = prev2;
		tail->next = curr;
		return dummy.next; 
    }
};