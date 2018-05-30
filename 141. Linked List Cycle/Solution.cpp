/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 34.99 %
    Runtime : 10 ms
    Testcase : 16 / 16 passed
    Ranking : Your runtime beats 98.87 % of cpp submissions.
}
*/

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
    bool hasCycle(ListNode *head) {
        ListNode* fast = head, *slow = head;
        while(fast != NULL)
        {
            if(fast->next != NULL)
            {
                fast = fast->next;
                if(fast->next != NULL)
                {
                    fast = fast->next;
                    slow = slow->next;
                }
                if(fast == slow)
                    return true;
            }
            else if(fast->next == NULL)
                break;
        }
        return false;
    }
};