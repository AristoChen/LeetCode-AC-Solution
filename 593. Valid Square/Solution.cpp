class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        
        if(p1 == p2 && p2 == p3 && p3 == p4)
            return false;
        
        int d2 = findDistance(p1,p2);
        int d3 = findDistance(p1,p3);
        int d4 = findDistance(p1,p4);
        
        if(d2 == d3 && 2*d2 == d4)
        {
            int d = findDistance(p2, p4);
            return (d == d2 && d == findDistance(p3, p4));
        }

        if(d2 == d4 && 2*d2 == d3)
        {
            int d = findDistance(p2, p3);
            return (d == d2 && d == findDistance(p3, p4));
        }
        if(d3 == d4 && 2*d3 == d2)
        {
            int d = findDistance(p2, p3);
            return (d == d3 && d == findDistance(p2, p4));
        }
        return false;
    }
    
    int findDistance(vector<int>& p1, vector<int>& p2)
    {
        return (p1[0]-p2[0])*(p1[0]-p2[0]) + (p1[1]-p2[1])*(p1[1]-p2[1]);
    }
};