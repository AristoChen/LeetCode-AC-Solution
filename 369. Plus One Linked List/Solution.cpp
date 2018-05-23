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
    ListNode* plusOne(ListNode* head) {
        ListNode* temp = head;
        stack<ListNode*> stack;
        int carry = 1;
        while(temp != NULL)
        {
            stack.push(temp);
            temp = temp->next;
        }
        
        while(!stack.empty())
        {
            temp = stack.top();
            temp->val += carry;
            carry = 0;
            if(temp->val > 9)
            {
                temp->val -= 10;
                carry = 1;
            }
            stack.pop();
        }
        if(carry == 1)
        {
            head = new ListNode(1);
            head->next = temp;
        }
        
        return head;
    }
};