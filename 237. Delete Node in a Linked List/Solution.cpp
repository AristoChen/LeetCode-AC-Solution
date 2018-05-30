/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 47.29 %
    Runtime : 13 ms
    Testcase : 83 / 83 passed
    Ranking : Your runtime beats 99.39 % of cpp submissions.
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
    void deleteNode(ListNode* node) {
        *node = *node->next;
    }
};