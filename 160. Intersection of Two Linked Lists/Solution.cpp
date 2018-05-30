/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 30.85 %
    Runtime : 38 ms
    Testcase : 42 / 42 passed
    Ranking : Your runtime beats 51.40 % of cpp submissions.
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0, lenB = 0;
        int count = 0;
        ListNode *tempA = headA, *tempB = headB;
        
        while(tempA != NULL)
        {
            tempA= tempA->next;
            lenA++;
        }
        while(tempB != NULL)
        {
            tempB = tempB->next;
            lenB++;
        }
        
        tempA = headA;
        tempB = headB;
        
        if(lenA > lenB)
        {
            count = lenA - lenB;
            while(count > 0)
            {
                tempA = tempA->next;
                count--;
            }
        }
        
        else if(lenA < lenB)
        {
            count = lenB - lenA;
            while(count > 0)
            {
                tempB = tempB->next;
                count--;
            }
        }
        while(tempA != NULL && tempB != NULL)
        {
            if(tempA == tempB)
                return tempA;
            else
            {
                tempA = tempA->next;
                tempB = tempB->next;
            }
        }
        return NULL;
    }
};