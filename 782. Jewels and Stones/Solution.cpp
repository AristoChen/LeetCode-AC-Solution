class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int answer = 0;
        for(char i : S)
        {
            if(J.find(i) != string::npos)
                answer++;
        }
        return answer;
    }
};