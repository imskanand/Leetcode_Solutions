
// @lc code=start
class Solution {
 public:
  int minDeletions(string s) {
    int n = s.size();
    vector<int> v(26, 0);
    /* Counting the frequency of each character in the string. */
    for (int i = 0; i < n; i++) {
      v[s[i] - 'a']++;
    }
    /* Sorting the vector in descending order. */
    sort(v.begin(), v.end(), greater<int>());
    int deleted = 0;
    for (int i = 1; i < 26; i++) {
      /* To make sure that the frequency of the character is not zero. */
      if (v[i] == 0) {
        break;
      }
      /* Trying to make the frequency of the character unique. */
      if (v[i] >= v[i - 1]) {
        int tempDelete = v[i] - v[i - 1] + 1;
        tempDelete = min(tempDelete, v[i]);
        v[i] -= tempDelete;  // remove of the characters
        deleted += tempDelete;
      }
    }
    return deleted;
  }
};