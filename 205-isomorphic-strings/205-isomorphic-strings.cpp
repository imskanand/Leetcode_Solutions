class Solution {
 public:
  bool isIsomorphic(string s, string t) {
    map<char, char> m;
    map<char, char> n;
    if (s.length() != t.length()) {
      return false;
    }
    for (int i = 0; i < s.length(); i++) {
      if (m[s[i]]) {
        if (t[i] == m[s[i]]) {
          continue;
        } else {
          return false;
        }
      } else {
        m[s[i]] = t[i];
      }
    }
    for (int i = 0; i < t.length(); i++) {
      if (n[t[i]]) {
        if (s[i] == n[t[i]]) {
          continue;
        } else {
          return false;
        }
      } else {
        n[t[i]] = s[i];
      }
    }
    return true;
  }
};