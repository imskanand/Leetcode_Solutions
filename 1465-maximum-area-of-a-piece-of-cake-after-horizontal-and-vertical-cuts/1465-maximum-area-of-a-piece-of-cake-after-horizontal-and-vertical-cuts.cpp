class Solution {
public:
    int MOD = 1e9 + 7;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
// Pushing the height to the horizontal Cuts
        horizontalCuts.push_back(h);
        sort(horizontalCuts.begin(), horizontalCuts.end());
// Pushing the width to the vertical Cuts
        verticalCuts.push_back(w);
        sort(verticalCuts.begin(), verticalCuts.end());
// Both Gap starts form the index 0 Pos        
        long long maxHorizontalGap = horizontalCuts[0];
        long long maxVerticalGap = verticalCuts[0];
// Calculating the max Horizonatal gap
        for (int i = 1; i < horizontalCuts.size(); ++i) {
            maxHorizontalGap = max(maxHorizontalGap, (long long)horizontalCuts[i] - horizontalCuts[i - 1]);
        }
        
        for (int i = 1; i < verticalCuts.size(); ++i) {
            maxVerticalGap = max(maxVerticalGap, (long long)verticalCuts[i] - verticalCuts[i - 1]);
        }
        
        return (maxHorizontalGap % MOD * maxVerticalGap % MOD) % MOD;
    }
};