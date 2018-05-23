class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> answer;
        for(int i = 0; i < numbers.size()-1; i++)
        {
            if(numbers[i] > target)
                break;
            for(int j = i+1; j < numbers.size(); j++)
            {
                if(numbers[j] > target-numbers[i])
                    break;
                if(numbers[i] + numbers[j] == target)
                {
                    answer.push_back(i+1);
                    answer.push_back(j+1);
                    break;
                }
            }
        }
        return answer;
    }
};