class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        int mod = 1e9 + 7;
        vector<int> nw(n + 1,0);
        nw[0] = 1;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + delay; j <= n && j < i + forget; j++)
                nw[j] = (nw[j] + nw[i]) % mod;
            if (i + forget >= n)
                ans = (ans + nw[i]) % mod;
        }
        return ans;
    }
};