class Solution {
 public:
  bool isSubsequence(string s, string t) {
    int n = s.length();
    int m = t.length();
    int j = 0;
    
    // First we traverse s and t, and compare current character of s with first unmatched char of t if matched then move ahead in s
    for(int i =0; i<m and j<n;i++){
      if(s[j]==t[i]){
        j++;
      }
    }
    // If all characters of s were found in t then n will be equal otherwise not
    return (j==n);
  }
};