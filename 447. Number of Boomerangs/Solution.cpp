class Solution {
public:
    int numberOfBoomerangs(vector<pair<int, int>>& points) {
        map<pair<int,int>, double> count;
        map<double, int> sameDistance;
        int answer = 0;
        
        for(int i = 0; i < points.size(); i++)
        {
            for(int j = 0; j < points.size(); j++)
            {
                if(i == j)
                    continue;
                double distance = sqrt(pow(points[i].first-points[j].first, 2) + pow(points[i].second-points[j].second, 2));
                count[make_pair(i, j)] = distance;     
            }
            
            for(int k = 0; k < points.size(); k++)
            {
                if(i == k)
                    continue;
                else
                    sameDistance[count[make_pair(i, k)]]++;
            }
            
            for(map<double,int>::iterator l = sameDistance.begin(); l != sameDistance.end(); l++)
            {
                if(l->second >= 2)
                    answer += (l->second)*(l->second-1);
            }
            count.clear();
            sameDistance.clear();
        }
        return answer;
    }
};