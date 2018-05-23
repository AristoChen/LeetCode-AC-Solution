int hammingDistance(int x, int y) {
    
   int input = x ^ y, MSB = 0;

	for (; input != 0; input >>= 1)
	{
		if (input & 1)
			MSB++;
	}

	return MSB;
}