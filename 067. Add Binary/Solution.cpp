class Solution {
public:
	string addBinary(string a, string b) {
		string answer = "";
		int carry = 0;
		int lenA = a.length() - 1, lenB = b.length() - 1;
		while (lenA > lenB)
		{
			b = "0" + b;
			lenB++;
		}
		while (lenB > lenA)
		{
			a = "0" + a;
			lenA++;
		}

		for (int i = lenA; i >= 0; i--)
		{
			if (int(a[i]) + int(b[i]) + carry - 96 == 3)
				answer = "1" + answer;
			else if (int(a[i]) + int(b[i]) + carry - 96 == 2)
			{
				answer = "0" + answer;
				carry = 1;
			}
			else if (int(a[i]) + int(b[i]) + carry - 96 == 1)
			{
				answer = "1" + answer;
				carry = 0;
			}
			else
				answer = "0" + answer;
		}
		if (carry == 1)
			answer = "1" + answer;

		return answer;
	}
};