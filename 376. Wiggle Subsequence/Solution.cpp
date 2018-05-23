class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        int previousSign = 0,currentSign = 0;
        int finalAnswer = 1, currentAnswer = 1;

        if (nums.size() == 0)
            return 0;
        else if (nums.size() == 1)
            return 1;
        else
        {
            for (int i = 0; i < nums.size() - 1; i++)
            {
                    if (nums[i] - nums[i + 1] > 0)
                        currentSign = 1;

                    else if (nums[i] - nums[i + 1] < 0)
                        currentSign = -1;

                    if (currentSign != previousSign)
                    {
                        previousSign = currentSign;
                        currentAnswer += 1;
                    }

            }
            finalAnswer = finalAnswer > currentAnswer ? finalAnswer : currentAnswer;

        }
        return finalAnswer;
    }
};