/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 30.18 %
    Runtime : 16 ms
    Testcase : 168 / 168 passed
    Ranking : Your runtime beats 5.35 % of cpp submissions.
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
        map<int,int> count;
        ListNode* temp = head;
        while(temp != NULL)
        {
            count[temp->val]++;
            temp = temp->next;
        }
        temp = head;
        while(temp != NULL)
        {
            if(temp->next != NULL)
            {
                if(count[temp->next->val] > 1)
                    temp->next = temp->next->next;
                else
                    temp = temp->next;
            }
            else 
                temp = temp->next;
        }
        if(count[head->val] > 1)
            head = head->next;
        return head;
    }
};