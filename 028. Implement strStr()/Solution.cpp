/*
Submission Detail:{
    Difficulty : Easy
    Acceptance Rate : 29.20 %
    Runtime : 6 ms
    Testcase : 74 / 74 passed
    Ranking : Your runtime beats 98.96 % of cpp submissions.
}
*/

class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.length() < needle.size())
            return -1;
        if(needle.length() == 0)
            return 0;
        
        int match = 0;
        for(int i = 0; i <= haystack.length()-needle.size(); i++)
        {
            for(int j = 0; j < needle.length(); j++)
            {
                if(haystack[i+j] == needle[j])
                    match++;
                else 
                    break;
            }
            if(match == needle.length())
                return i;
            match = 0;
        }
        return -1;
    }
};