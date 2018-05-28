class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        vector<int> S, visited(nums.size());
        int answer = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(visited[i] == 0)
                S.clear();
            else
                continue;
            S.push_back(nums[nums[i]]);
            visited[nums[nums[i]]] = 1;
            while(S.back() != nums[i])
            {
                S.push_back(nums[S.back()]);
                visited[nums[S.back()]] = 1;                
            }
            if(S.size() > answer)
                answer = S.size();
        }
        return answer;
    }
};