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
	ListNode* reverseKGroup(ListNode* head, int k) {
		if (head == NULL || k == 1)
			return head;

		stack<ListNode*> stack;
		ListNode* temp = head, *kPlusOneNode = NULL;
		int count = 0;
		while (count != k && temp != NULL)
		{
			stack.push(temp);
			count++;
			if (count < k)
				temp = temp->next;
		}

		if (temp != NULL)
			kPlusOneNode = temp->next;

		if (count == k)
		{
			head = temp;
			stack.pop();
			while (!stack.empty())
			{
				temp->next = stack.top();
				temp = temp->next;
				stack.pop();
			}
			temp->next = NULL;
		}
		if (kPlusOneNode != NULL)
			temp->next = reverseKGroup(kPlusOneNode, k);

		return head;
	}
};