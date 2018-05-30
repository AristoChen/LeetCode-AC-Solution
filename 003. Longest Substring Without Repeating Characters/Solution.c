/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 24.77 %
    Runtime : 185 ms
    Testcase : 983 / 983 passed
    Ranking : Your runtime beats 3.05 % of c submissions.
}
*/

bool allUnique(char* s, int start, int end)
{
	for (int i = start; i < end; i++)
	{
		if (s[i] == s[end])
			return false;
	}
	return true;
}

int lengthOfLongestSubstring(char* s) {

	size_t totalLength = strlen(s);
	int Answer = 0;
	
	if (s[0] != 0)
	{
        Answer = 1;
		for (int i = 0; i < totalLength; i++)
		{
			for (int j = i + 1; j < totalLength; j++)
			{
				if (allUnique(s, i, j))
					Answer = (Answer >(j - i + 1) ? Answer : (j - i + 1));
				else
					break;
			}
		}
	}

	return Answer;
}

