/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 45.00 %
    Runtime : 19 ms
    Testcase : 70 / 70 passed
    Ranking : Your runtime beats 34.93 % of cpp submissions.
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
    ListNode* oddEvenList(ListNode* head) {
        ListNode *odd = new ListNode(0), *even = new ListNode(0);
        ListNode *temp = head, *oddTemp = odd, *evenTemp = even;
        int count = 1;
        
        while(temp != NULL)
        {
            if(count % 2 == 1)
            {
                oddTemp->next = temp;
                oddTemp = oddTemp->next;
            }
            else if(count % 2 == 0)
            {
                evenTemp->next = temp;
                evenTemp = evenTemp->next;
            }
            count++;
            temp = temp->next;
        }
        evenTemp->next = NULL;
        oddTemp->next = even->next;
        head = odd->next;
        
        return head;
    }
};