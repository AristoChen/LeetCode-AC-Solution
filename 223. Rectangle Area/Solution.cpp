class Solution {
public:
    int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) {
        int area1 = (C-A) * (D-B);
        int area2 = (G-E) * (H-F);
        int area3 = 0;
        
        if(C <= E || A >= G || D <= F || B >= H)
            return area1+area2;
        else
        {
            vector<int> height, width;
            height.push_back(B);
            height.push_back(D);
            height.push_back(F);
            height.push_back(H);
            
            width.push_back(A);
            width.push_back(C);
            width.push_back(E);
            width.push_back(G);
            
            sort(height.begin(), height.end());
            sort(width.begin(), width.end());
            area3 = (height[2]-height[1]) * (width[2]-width[1]);
            return area1+area2-area3;
        }
    }
};