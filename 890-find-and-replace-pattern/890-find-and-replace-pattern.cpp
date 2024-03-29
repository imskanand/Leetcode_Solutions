class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
      int n = pattern.size();
      if(n==1){
        return words;
      }
      vector<string> results;
        for (string s : words) {
            bool match = true;
            for (int i = 0; i < s.size(); ++i) 
                for (int j = 0; j < s.size(); ++j) 
                    if ((pattern[i] == pattern[j]) != (s[i] == s[j])) 
                        match = false;
            
            if (match)
                results.push_back(s);
        }
        return results;
    }
};