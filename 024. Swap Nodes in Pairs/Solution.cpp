/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 39.54 %
    Runtime : 7 ms
    Testcase : 55 / 55 passed
    Ranking : Your runtime beats 12.10 % of cpp submissions.
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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
            
        ListNode* temp = head, *third = head->next->next;
        head = head->next;
        head->next = temp;
        temp->next = third;
        
        if(head->next->next != NULL)
        {
            if(head->next->next->next != NULL)
                head->next->next = swapPairs(head->next->next);
        }
        return head;
    }
};