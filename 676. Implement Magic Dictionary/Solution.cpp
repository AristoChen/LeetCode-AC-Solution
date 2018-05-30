/*
Submission Detail:{
    Difficulty : Medium
    Acceptance Rate : 49.12 %
    Runtime : 3 ms
    Testcase : 32 / 32 passed
    Ranking : Your runtime beats 99.48 % of cpp submissions.
}
*/

class MagicDictionary {
public:
    vector<string> dictionary;
    /** Initialize your data structure here. */
    MagicDictionary() {
        
    }
    
    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict) {
        dictionary = dict;
    }
    
    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(string word) {
        int notFound = 0;
        for(int i = 0; i < dictionary.size(); i++)
        {
            if(dictionary[i].length() == word.length())
            {
                for(int j = 0; j < word.length(); j++)
                {
                    if(notFound > 1)
                        break;
                    
                    if(dictionary[i][j] != word[j])
                        notFound++;   
                }
                if(notFound == 1)
                    return true;
                notFound = 0;
            }
        }
        return false;
    }
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary obj = new MagicDictionary();
 * obj.buildDict(dict);
 * bool param_2 = obj.search(word);
 */