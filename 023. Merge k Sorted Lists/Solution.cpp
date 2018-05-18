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
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		ListNode* answer = new ListNode(0), *temp = answer;
		int currentRow = 0;
		while (!lists.empty())
		{
			for (int i = 0; i < lists.size(); i++)
			{
				if (lists[i] == NULL)
				{
					lists.erase(lists.begin() + i);
					if (i > 0)
						i--;
				}
				else if (lists[i] != NULL)
				{
					if (lists[currentRow]->val > lists[i]->val)
						currentRow = i;
				}
			}

			if (lists[currentRow] != NULL)
			{
				temp->next = lists[currentRow];
				temp = temp->next;
				lists[currentRow] = lists[currentRow]->next;
			}
			currentRow = 0;
		}
		return answer->next;
	}
};