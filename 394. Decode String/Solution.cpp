class Solution {
public:
    string decodeString(string s) {
        s = " " + s;
        string temp= "";
        int currentPos = 0, tempPos = 0;
        int count = 0;
        for(int i = 0; i < s.length(); i++)
        {
            currentPos = i-1;
            while(s[i] == ']')
            {
                currentPos--;
                if(s[currentPos] == '[')
                {
                    tempPos = currentPos;
                    temp = s.substr(currentPos+1, i-currentPos-1);
                    currentPos--;
                    while(isdigit(s[currentPos]) && currentPos >= 0)
                    {
                        currentPos--;
                        if(!isdigit(s[currentPos]))
                        {
                            count = stoi(s.substr(currentPos+1, tempPos-currentPos-1));
                            s.replace(currentPos+1, i-currentPos, "");
                            for(int j = 0; j < count; j++)
                            {
                                s.insert(currentPos+1, temp);
                            }
                            i = currentPos+(temp.length()*count)-1;
                        }
                        
                    }
                    i++;
                }  
            }
        }
        s.replace(0, 1, "");
             
        return s;
    }
};