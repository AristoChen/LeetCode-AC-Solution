class Solution {
public:
	vector<string> letterCombinations(string digits) {
		if (digits == "")
			return{};
		vector<string> temp;
		vector<string> answer;
		string combination = "";
		string convert = "";
		for (int i = 0; i < digits.length(); i++)
		{
			if (digits[i] == '2')
				convert = "abc";
			else if (digits[i] == '3')
				convert = "def";
			else if (digits[i] == '4')
				convert = "ghi";
			else if (digits[i] == '5')
				convert = "jkl";
			else if (digits[i] == '6')
				convert = "mno";
			else if (digits[i] == '7')
				convert = "pqrs";
			else if (digits[i] == '8')
				convert = "tuv";
			else if (digits[i] == '9')
				convert = "wxyz";
			temp.push_back(convert);
		}

		calculate(temp, answer, combination, 0, digits.length());

		return answer;
	}

	void calculate(vector<string>& input, vector<string>& answer, string& combination, int iBegin, int count)
	{
		if (count == 0)
		{
			answer.push_back(combination);
			return;
		}
		else
		{
			for (int i = iBegin; i < input.size(); i++)
			{
				for (int j = 0; j < input[i].size(); j++)
				{
					combination += input[i][j];
					calculate(input, answer, combination, i + 1, count - 1);
					combination = combination.substr(0, combination.length() - 1);
				}
			}
		}
	}
};