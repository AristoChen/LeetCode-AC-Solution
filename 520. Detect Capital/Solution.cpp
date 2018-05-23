class Solution {
public:
    bool detectCapitalUse(string word) {
        int length = word.length();
        
        if(length == 0)
            return false;
        else if(length == 1)
            return true;
        
        int type, i = 0;
        if(isupper(word[0]) && isupper(word[1]))
        {
            type = 1;
            i = 2;   
        }
        else if(islower(word[0]))
        {
            type = 2;
            i = 1;            
        } 
        else if(isupper(word[0]) && islower(word[1]))
        {
            type = 3;
            i = 2;            
        }
        
        for(i; i < length; i++)
        {
            if(type == 1 && islower(word[i]))
                return false;
            else if(type == 2 && isupper(word[i]))
                return false;
            else if(type == 3 && isupper(word[i]))
                return false;
        }
        
        return true;
    }
};