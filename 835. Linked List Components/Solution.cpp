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
    int numComponents(ListNode* head, vector<int>& G) {
        int answer = 0, flag = 0;
        while(head != NULL)
        {
            if(find(G.begin(), G.end(), head->val) != G.end())
            {
                if(flag == 0)
                {
                    flag = 1;
                    answer++;
                }
            }
            else 
                flag = 0;
            head = head->next;
        }
        
        return answer;
    }
};