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
	ListNode* rotateRight(ListNode* head, int k) {
		ListNode* answer = head;
		int length = 0;

		if (head == NULL || head->next == NULL)
			return head;

		while (head != NULL)
		{
			head = head->next;
			length++;
			if (head->next == NULL)
			{
				length++;
				break;
			}
		}
		head->next = answer;
		head = answer;

		while (length - k - 1 < 0)
			length += length;

		for (int i = 0; i < length - k - 1; i++)
			head = head->next;

		answer = head->next;
		head->next = NULL;

		return answer;
	}
};