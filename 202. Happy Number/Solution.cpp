class Solution {
public:
    bool isHappy(int n) {
        int num = n;
        while(n > 4)
        {
            string temp = to_string(n);
            n = 0;
            for(int i = 0 ; i < temp.length(); i++)
                n += pow(int(temp[i])-48, 2);
            if(n == num)
                break;
        }
        
        if(n == 1)
            return true;
        else
            return false;
    }
};