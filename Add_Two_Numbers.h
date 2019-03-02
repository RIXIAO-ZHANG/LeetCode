/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
	{
		int x = 0;
		int y = 0;
		int sum = 0;
		int carry = 0;
		ListNode* p = l1;
		ListNode* q = l2;
		ListNode* dummyHead = new ListNode(0);
		ListNode* curr = dummyHead;

		while (p || q)
		{
			x = (p != NULL) ? p->val : 0;
			y = (q != NULL) ? q->val : 0;
			sum = x + y + carry;
			carry = sum / 10;
			curr->next = new ListNode(sum % 10);
			curr = curr->next;
			if (p) p = p->next;
			if (q) q = q->next;
		}

		if (carry) curr->next = new ListNode(1);

		return dummyHead->next;
	}
}
