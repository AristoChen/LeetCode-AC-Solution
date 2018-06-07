/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 67.63 %
    Runtime : 90 ms
    Testcase : 26 / 26 passed
    Ranking : Your runtime beats 77.39 % of cpp submissions.
}
*/

class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>> answer;
        vector<int> combination(1,0);
        calculate(graph, answer, combination, 0);
        
        return answer;
    }
    
    void calculate(vector<vector<int>>& graph, vector<vector<int>>& answer, vector<int>& combination , int begin)
    {
        if(begin == graph.size()-1)
        {
            answer.push_back(combination);
            return;
        }
        else
        {
            for(int i = 0; i < graph[begin].size(); i++)
            {
                combination.push_back(graph[begin][i]);
                calculate(graph, answer, combination, graph[begin][i]);
                combination.pop_back();
            }
        }
    }
};