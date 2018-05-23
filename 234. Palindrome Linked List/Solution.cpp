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
    bool isPalindrome(ListNode* head) {
        vector<int> temp;
        int length = 0;
        while(head != NULL)
        {
            temp.push_back(head->val);
            head = head->next;
            length++;
        }
        for(int i = 0; i < (length/2); i++)
        {
            if(temp[i] != temp[length-i-1])
                return false;
        }
        return true;
    }
};