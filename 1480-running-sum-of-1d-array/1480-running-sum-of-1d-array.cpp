class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       vector<int> sumVector;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++)
    {
      sum += nums[i];
      sumVector.push_back(sum);
    }
    return sumVector; 
    }
};