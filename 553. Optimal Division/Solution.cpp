class Solution {
public:
    string optimalDivision(vector<int>& nums) {
        if(nums.size() == 0)
            return "";
        else if(nums.size() == 1)
            return to_string(nums[0]);
        else if(nums.size() == 2)
            return (to_string(nums[0]) + "/" + to_string(nums[1]));
        else if(nums.size() > 2)
        {
            string answer = to_string(nums[0]) + "/(";
            for(int i = 1; i < nums.size(); i++)
                answer += (to_string(nums[i]) + "/");
            answer.erase(answer.length()-1, 1);
            answer += ")";
            
            return answer;
        }
    }
};