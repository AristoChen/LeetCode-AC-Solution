class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> accessibleRooms(1, 0);
        for(int i = 0; i < rooms[0].size(); i++)
            calculate(rooms, accessibleRooms, rooms[0][i]);        
        
        if(rooms.size() == accessibleRooms.size())
            return true;
        return false;
    }
    
    void calculate(vector<vector<int>>& rooms, vector<int>& accessibleRooms, int currentKey)
    {
        if(find(accessibleRooms.begin(), accessibleRooms.end(), currentKey) == accessibleRooms.end())
        {
            accessibleRooms.push_back(currentKey);
            for(int i = 0; i < rooms[currentKey].size(); i++)
                calculate(rooms, accessibleRooms, rooms[currentKey][i]);
        }
    }
};