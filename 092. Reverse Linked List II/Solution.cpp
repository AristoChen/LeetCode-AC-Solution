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
	ListNode* reverseBetween(ListNode* head, int m, int n) {
		stack<int> stack;
		ListNode* temp = head;
		int count = 1;
		while (count < m)
		{
			temp = temp->next;
			count++;
		}

		while (count <= n)
		{
			stack.push(temp->val);
			temp = temp->next;
			count++;
		}

		count = 1;
		temp = head;

		while (count < m)
		{
			temp = temp->next;
			count++;
		}
		while (count <= n)
		{
			temp->val = stack.top();
			temp = temp->next;
			stack.pop();
			count++;
		}

		return head;
	}
};