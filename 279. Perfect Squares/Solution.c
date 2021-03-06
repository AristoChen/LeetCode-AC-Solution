/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 37.87 %
    Runtime : 3 ms
    Testcase : 586 / 586 passed
    Ranking : Your runtime beats 100.00 % of c submissions.
}
*/

int numSquares(int n) {
    int answer = 0;
	
	if (n - (int)(sqrt(n) * (int)sqrt(n)) == 0)
		return 1;

	while (n % 4 == 0)
		n >>= 2;
	if (n % 8 == 7)
		return 4;

	int sqrt_N = (int)sqrt(n);
	for (int i = 1; i <= sqrt_N; i++)
	{
		if (n - i * i == (int)sqrt(n - i * i) * (int)sqrt(n - i * i))
			return 2;
	}
	
	return 3;
}