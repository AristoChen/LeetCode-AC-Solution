class Solution {
public:
    int minDistance(int height, int width, vector<int>& tree, vector<int>& squirrel, vector<vector<int>>& nuts) {
        int totalDistance = 0, index = 0;
        int closestNutDistance = INT_MAX;
        for(int i = 0; i < nuts.size(); i++)
        {
            totalDistance += (abs(nuts[i][0]-tree[0]) + abs(nuts[i][1]-tree[1]));
            if(closestNutDistance > (abs(nuts[i][0]-squirrel[0])+abs(nuts[i][1]-squirrel[1]))-(abs(nuts[i][0]-tree[0]) + abs(nuts[i][1]-tree[1])))
                closestNutDistance = (abs(nuts[i][0]-squirrel[0])+abs(nuts[i][1]-squirrel[1]))-(abs(nuts[i][0]-tree[0]) + abs(nuts[i][1]-tree[1]));    
        }
        return 2*totalDistance+closestNutDistance;
    }
};