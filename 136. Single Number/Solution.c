/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 55.84 %
    Runtime : 3 ms
    Testcase : 15 / 15 passed
    Ranking : Your runtime beats 100.00 % of c submissions.
}
*/

int singleNumber(int* nums, int numsSize) 
{
	int answer = nums[0];
	for (int i = 1; i < numsSize; i++)
	{
		answer = nums[i] ^ answer;
	}
	return answer;
}

