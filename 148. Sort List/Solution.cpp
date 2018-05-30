/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 30.29 %
    Runtime : 50 ms
    Testcase : 16 / 16 passed
    Ranking : Your runtime beats 91.41 % of cpp submissions.
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
    ListNode* sortList(ListNode* head) {
        if(head == NULL)
            return head;
        vector<ListNode*> index;
        ListNode* temp = head;
        while(temp != NULL)
        {
            index.push_back(temp);
            temp = temp->next;
        }
        
        sort(index.begin(), index.end(), [](ListNode* a, ListNode* b){return a->val < b->val;});
        
        head = index[0];
        temp = head;
        for(int i = 1; i < index.size(); i++)
        {
            temp->next = index[i];
            temp = temp->next;
        }
        temp->next = NULL;
        
        return head;
    }
};