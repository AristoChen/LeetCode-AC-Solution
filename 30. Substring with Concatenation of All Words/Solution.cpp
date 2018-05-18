class Solution {
public:
	vector<int> findSubstring(string s, vector<string>& words) {
		if (s.length() == 0 || words.size() == 0)
			return{};

		int length = 0, count = 0;
		vector<int> answer;
		string temp = "";
		for (int i = 0; i < words.size(); i++)
			length += words[i].length();

		if (length > s.length())
			return{};

		for (int i = 0; i < s.length() - length + 1; i++)
		{
			temp = s.substr(i, length);
			for (int j = 0; j < temp.length(); j = j + words[0].length())
			{
				temp.insert(j, ".");
				j++;
			}
			for (int j = 0; j < words.size(); j++)
			{
				size_t pos = temp.find(words[j]);
				if (pos == string::npos)
					break;
				else
				{
					count++;
					temp.erase(pos, words[j].length());
				}
			}
			if (count == words.size())
				answer.push_back(i);
			count = 0;
		}

		return answer;
	}
};