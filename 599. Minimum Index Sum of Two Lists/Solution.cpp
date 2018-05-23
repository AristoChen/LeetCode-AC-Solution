class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {

        map<string, int> count;
        int minium = INT_MAX;
        vector<string> answer;
        
        if(list1[0] == list2[0])
        {
            answer.push_back(list1[0]);
            return answer;
        }
        
        for(int i = 0; i < list1.size(); i++)
            count[list1[i]] = (0-i);
        for(int i = 0; i < list2.size(); i++)
        {
            if(count.count(list2[i]) != 0)
                count[list2[i]] = i-count[list2[i]];
        }
        
        for(map<string,int>::iterator i = count.begin(); i != count.end(); i++)
        {
            if(i->second > 0 && i->second < minium)
            {
                minium = i->second;
                answer = {};
                answer.push_back(i->first);                
            }
            else if(i->second > 0 && i->second == minium)
                answer.push_back(i->first);
        }
        
        return answer;
    }
};