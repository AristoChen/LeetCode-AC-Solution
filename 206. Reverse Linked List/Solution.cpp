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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
            return head;
        
        ListNode* temp = head;
        stack<int> stack;
        
        while(head != NULL)
        {
            stack.push(head->val);
            head = head->next;
        }
        
        ListNode* answer = new ListNode(stack.top());
        stack.pop();
        temp = answer;
        while(!stack.empty())
        {
            temp->next = new ListNode(stack.top());
            stack.pop();
            temp = temp->next;
        }
        
        return answer;
    }
};