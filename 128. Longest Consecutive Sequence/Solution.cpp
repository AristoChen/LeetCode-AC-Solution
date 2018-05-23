class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int, int> temp;
        int currentKey, currentLength = 1, answer = 0;
        for(int i = 0; i < nums.size(); i++)
            temp[nums[i]]++;
        
        currentKey = temp.begin()->first;
        for(map<int, int>::iterator i = temp.begin(); i != temp.end(); ++i)
        {
            if(i->first == (currentKey+1))
            {
                currentLength++;
                currentKey = i->first;
            }
            else
                currentLength = 1; 
            
            answer = max(answer, currentLength);
            currentKey = i->first;
        }
        return answer;
    }
};