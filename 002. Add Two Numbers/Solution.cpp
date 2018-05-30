/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 28.81 %
    Runtime : 77 ms
    Testcase : 1562 / 1562 passed
    Ranking : Your runtime beats 11.95 % of cpp submissions.
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *answer = NULL, *prev = NULL; 
        int carry = 0;
        while(l1 || l2)
        {
            int v1 = (l1? l1->val:0);
            int v2 = (l2? l2->val:0);
            int sum = v1 + v2 + carry;
            carry = sum / 10;
            int val = sum % 10;
            ListNode *current = new ListNode(val);
            if(answer == NULL) answer = current;
            if(prev) prev->next = current;
            prev = current;
            
            l1 = l1? l1->next:NULL;
            l2 = l2? l2->next:NULL;
            
        }
        
        if(carry > 0)
        {
            ListNode *current = new ListNode(carry);
            prev->next = current;
        }
        return answer;
    }
};