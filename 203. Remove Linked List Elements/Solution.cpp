/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 33.64 %
    Runtime : 29 ms
    Testcase : 65 / 65 passed
    Ranking : Your runtime beats 73.46 % of cpp submissions.
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
    ListNode* removeElements(ListNode* head, int val) {
        if(head == NULL)
            return head;
        else
        {
            head->next = removeElements(head->next, val);
            if(head->val == val)
                return head->next;
        }
        return head;
    }
};