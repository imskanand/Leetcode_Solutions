class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      vector<int> v(2,-1);
      if(!binary_search(nums.begin(),nums.end(),target)){
        return v;
      }
      auto first_occurance = lower_bound(nums.begin(),nums.end(),target);
      auto last_occurance = upper_bound(nums.begin(),nums.end(),target);
      v[0]=(first_occurance-nums.begin());
      v[1]=(last_occurance-nums.begin()-1);
      return v;
    }
};