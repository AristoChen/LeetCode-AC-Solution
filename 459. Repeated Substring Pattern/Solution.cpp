class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        if(s.length() < 2)
            return false;
        vector<int> length;
        for(int i = 1; i <= sqrt(s.length()); i++)
        {
            if(s.length() % i == 0)
            {
                length.push_back(i);
                length.push_back(s.length()/i);
            }
        }
        
        sort(length.begin(), length.end());
        length.pop_back();
        for(int i = 0; i < length.size(); i++)
        {
            string temp = s;
            string pattern = s.substr(0, length[i]);
            for(int j = 0; j < s.length()/length[i]; j++)
            {
                if(pattern != temp.substr(0, length[i]))
                    break;
                else
                    temp.erase(0, length[i]);
            }
            if(temp == "")
                return true;
        }
        return false;
    }
};