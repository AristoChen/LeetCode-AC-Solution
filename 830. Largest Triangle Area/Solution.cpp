/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 53.53 %
    Runtime : 12 ms
    Testcase : 57 / 57 passed
    Ranking : Your runtime beats 00.00 % of cpp submissions.
}
*/

class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double answer = 0;
        
        for(int i = 0; i < points.size()-2; i++)
        {
            for(int j = i+1; j < points.size()-1; j++)
            {
                for(int k = j+1; k < points.size(); k++)
                    answer = max(answer, calculate(points[i], points[j], points[k]));    
            }
        }
        
        return answer;
    }
    
    double calculate(vector<int>& p1, vector<int>& p2, vector<int>& p3)
    {
        double l1 = sqrt(pow((p1[0]-p2[0]), 2) + pow((p1[1]-p2[1]), 2));
        double l2 = sqrt(pow((p2[0]-p3[0]), 2) + pow((p2[1]-p3[1]), 2));
        double l3 = sqrt(pow((p3[0]-p1[0]), 2) + pow((p3[1]-p1[1]), 2));
        double s = (l1+l2+l3) / double(2);
        double area = sqrt(s*(s-l1)*(s-l2)*(s-l3));
        return area;
    }
};