class Solution {
public:
    string findReplaceString(string S, vector<int>& indexes, vector<string>& sources, vector<string>& targets) {      
        vector<pair<int,int>> temp;
        for(int i = 0; i < indexes.size(); i++)
            temp.push_back(make_pair(indexes[i], i));
        
        sort(temp.begin(), temp.end());
        for(int i = temp.size()-1; i >= 0; i--)
        {
            if(S.substr(temp[i].first, sources[temp[i].second].length()) == sources[temp[i].second])
                S.replace(temp[i].first, sources[temp[i].second].length(), targets[temp[i].second]);
        }
        
        return S;
    }
};