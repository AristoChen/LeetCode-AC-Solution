/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 69.51 %
    Runtime : 3 ms
    Testcase : 149 / 149 passed
    Ranking : Your runtime beats 91.30 % of c submissions.
}
*/

int hammingDistance(int x, int y) {
    
   int input = x ^ y, MSB = 0;

	for (; input != 0; input >>= 1)
	{
		if (input & 1)
			MSB++;
	}

	return MSB;
}