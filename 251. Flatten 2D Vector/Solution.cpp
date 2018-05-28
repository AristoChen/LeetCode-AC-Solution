class Vector2D {
public:
    stack<int> flattern;
    Vector2D(vector<vector<int>>& vec2d) {
        for(int i = vec2d.size()-1; i >= 0; i--)
        {
            for(int j = vec2d[i].size()-1; j >= 0; j--)
                flattern.push(vec2d[i][j]);
        }
    }

    int next() {
        int answer = flattern.top();
        flattern.pop();
        return answer;
    }

    bool hasNext() {
        return !flattern.empty();
    }
};

/**
 * Your Vector2D object will be instantiated and called as such:
 * Vector2D i(vec2d);
 * while (i.hasNext()) cout << i.next();
 */