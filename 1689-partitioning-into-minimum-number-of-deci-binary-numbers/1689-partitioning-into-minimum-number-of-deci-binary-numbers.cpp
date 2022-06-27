#include <iostream>
#include <string>

class Solution {
public:
    int minPartitions(string n) {
        int maxDigit = 0;
      for(int i=0;i<n.length();i++){
        
        maxDigit = max(n[i]-'0', maxDigit);
      }
      return maxDigit;
    }
};