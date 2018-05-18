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
	ListNode* removeNthFromEnd(ListNode* head, int n) {
		int length = 0;
		ListNode* temp = head;
		while (temp != NULL)
		{
			length++;
			temp = temp->next;
		}

		if (length == n)
			return head->next;

		temp = head;

		for (int i = 1; i < length - n; i++)
			temp = temp->next;
		if (length > 1)
			temp->next = temp->next->next;

		return head;
	}
};