class Solution {
public:
    int minMoves2(vector<int>& nums) {
      int n= nums.size();
        sort(nums.begin(), nums.end());
        int d = (nums[0]+nums[n-1])/2;
        int mid = nums[n/2], ans = 0; 
        for(int i=0; i<n; i++)
        {
            ans += abs(nums[i]-mid); 
        }
        return ans;
    }
};