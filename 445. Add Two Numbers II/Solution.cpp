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
         stack<ListNode*> stack1, stack2;
        int carry = 0;
        
        while(l1 != NULL)
        {
            stack1.push(l1);
            l1 = l1->next;
        }
        while(l2 != NULL)
        {
            stack2.push(l2);
            l2 = l2->next;
        }
        
        while(!stack1.empty() && !stack2.empty())
        {
            l1 = stack1.top();
            l2 = stack2.top();
            l1->val = l1->val + l2->val + carry;
            carry = 0;
            if(l1->val > 9)
            {
                l1->val -= 10;
                carry = 1;                
            }
            l2->val = l1->val;
            stack1.pop();
            stack2.pop();
        }

        if(!stack1.empty() && stack2.empty())
        {
            while(!stack1.empty())
            {
                l1 = stack1.top();
                stack1.pop();
                l1->val += carry;
                carry = 0;
                if(l1->val > 9)
                {
                    l1->val -= 10;
                    carry = 1;
                }
            }
            if(stack1.empty() && carry == 1)
            {
                ListNode *answer = new ListNode(1);
                answer->next = l1;
                return answer;
            }
            else
                return l1;
        }
        else if(stack1.empty() && !stack2.empty())
        {
            while(!stack2.empty())
            {
                l2 = stack2.top();
                stack2.pop();
                l2->val += carry;
                carry = 0;
                if(l2->val > 9)
                {
                    l2->val -= 10;
                    carry = 1;
                }
            }
            if(stack2.empty() && carry == 1)
            {
                ListNode *answer = new ListNode(1);
                answer->next = l2;
                return answer;
            }
            else
                return l2;
        }
        if(stack1.empty() && stack2.empty())
        {
            if(carry == 1)
            {
                ListNode *answer = new ListNode(1);
                answer->next = l1;
                return answer;
            }
            else
                return l1;
        }
    }
};