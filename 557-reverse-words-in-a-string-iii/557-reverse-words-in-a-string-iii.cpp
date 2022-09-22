class Solution {
public:
    string reverseWords(string str) {
      int n = str.size();
        int left = 0;
        int right = 0;
        
        while(right < n)
        {
            while(right < n && str[right] != ' ')
            {
                right++;
            }
            reverse(str.begin() + left, str.begin() + right);
            left = right + 1;
            right++;
        }
        
        return str;
    }
};