/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 27.06 %
    Runtime : 55 ms
    Testcase : 13 / 13 passed
    Ranking : Your runtime beats 76.18 % of cpp submissions.
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
    void reorderList(ListNode* head) {
        if(head == NULL)
            return;
        deque<ListNode*> nodeList;
        ListNode* temp = head->next;
        while(temp != NULL)
        {
            nodeList.push_back(temp);
            temp = temp->next;
        }
        
        temp = head;
        
        while(nodeList.size() > 1)
        {    
            temp->next = nodeList.back();
            temp = temp->next;
            temp->next = nodeList.front();
            temp = temp->next;
            
            nodeList.pop_back();
            nodeList.pop_front();
        }
        
        if(nodeList.size() == 1)
        {
            temp->next = nodeList.back();
            temp = temp->next;
            nodeList.pop_back();
        }
        if(nodeList.size() == 0)
            temp->next = NULL;
    }
};