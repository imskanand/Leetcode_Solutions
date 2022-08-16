class Solution {
public:
    int firstUniqChar(string s) {
      int n = s.size(),index = -1;
      map<char,int> mp;
      for(int i=0;i<n;i++){
        mp[s[i]]++;
      }
      for(int i=0;i<n;i++){
        if(mp[s[i]]==1){
          index = i;
          break;
        }
      }
      return index;
    }
};