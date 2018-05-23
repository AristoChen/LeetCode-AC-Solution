class Solution {
public:
    string customSortString(string S, string T) {
        map<char, int> count;
        
        for(int i = 0; i < S.length(); i++)
            count[S[i]]++;
        for(int i = 0; i < T.length(); i++)
        {
            if(count[T[i]] >= 1)
            {
                count[T[i]]++;
                T.erase(i, 1);
                i--;
            }
        }
        for(int i = 0; i < S.length(); i++)
        {
            for(int j = 1; j < count[S[i]]; j++)
                T += S[i];
        }
        
        return T;
    }
};