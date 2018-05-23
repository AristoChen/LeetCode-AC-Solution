class Solution {
public:
    string toGoatLatin(string S) {
        if(S.length() == 0)
            return S;
        vector<char> vowel = {'a','e','i','o','u','A','E','I','O','U'};
        int pos = 0, index = 1;
        S += " ";
        
        for(int i = 0; i < S.length(); i++)
        {
            if(S[i] == ' ')
            {
                if(find(vowel.begin(), vowel.end(), S[pos]) != vowel.end())
                    S.insert(i, "ma" + string(index, 'a'));
                    
                else
                {
                    S.insert(i, string(1, S[pos]) + "ma" + string(index, 'a'));
                    S.erase(pos, 1);
                }
                i += index+2;
                pos = i+1;
                index++;
            }
        }
        S.pop_back();
        return S;
    }
};