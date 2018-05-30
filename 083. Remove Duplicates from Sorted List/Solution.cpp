/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 40.41 %
    Runtime : 12 ms
    Testcase : 165 / 165 passed
    Ranking : Your runtime beats 99.34 % of cpp submissions.
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode *temp1 = head, *temp2 = head->next;
        while(temp2 != NULL)
        {
            if(temp1->val == temp2->val)
            {
                temp1->next = temp2->next;
                temp2 = temp2->next;
            }
            else
            {
                temp1 = temp1->next;
                temp2 = temp2->next;
            }
        }
        return head;
    }
};