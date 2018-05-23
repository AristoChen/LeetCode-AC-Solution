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
    ListNode *detectCycle(ListNode *head) {
        vector<ListNode*> temp;
        while(head != NULL)
        {
            temp.push_back(head);
            head = head->next;
            if(find(temp.begin(), temp.end(), head) != temp.end())
                return head;
        }
        return NULL;
    }
};