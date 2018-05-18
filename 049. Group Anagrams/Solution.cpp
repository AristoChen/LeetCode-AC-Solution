class Solution {
public:
	vector<vector<string>> groupAnagrams(vector<string>& strs) {
		vector<vector<string>> answer;
		vector<map<char, int>> count;
		for (int i = 0; i < strs.size(); i++)
		{
			count.push_back(map<char, int>());
			if (strs[i].length() == 0)
				count[i]['EMPTY']++;
			for (int j = 0; j < strs[i].length(); j++)
				count[i][strs[i][j]]++;
		}

		for (int i = 0; i < count.size(); i++)
		{
			if (!count[i].empty())
			{
				answer.push_back({});
				answer.back().push_back(strs[i]);
			}

			for (int j = i + 1; j < count.size(); j++)
			{
				if (count[i] == count[j] && !count[i].empty())
				{
					answer.back().push_back(strs[j]);
					count[j] = {};
				}
			}
		}

		return answer;
	}
};